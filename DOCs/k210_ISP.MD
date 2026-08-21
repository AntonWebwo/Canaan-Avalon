# 🔬 Подробный разбор ISP Bootloader K210

Это **деассемблированный код ISP bootloader** для **Kendryte K210** (RISC-V процессор). Давайте разберем **каждую функцию** по порядку!

## 🎯 **Общая архитектура**

```
SRAM 0x80000000
┌─────────────────────────────┐
│  ISP Bootloader (~65KB)     │ ← Распакованная zlib программа
│  ├─ UART/SLIP протокол      │
│  ├─ SPI Flash драйвер       │
│  ├─ Flash команды (erase)   │
│  ├─ SRAM загрузчик          │
│  └─ Bootloader (0x80000000) │
└─────────────────────────────┘
```

## 1. **Инициализация и точка входа** `FUN_00000100`

```c
void FUN_00000100(void) {
    gp = gp + 0x75c;           // Инициализация global pointer
    tp = 0x949c0;              // Thread pointer (константы)
    FUN_0000033a();            // Главная инициализация ISP
}
```

**`gp/tp`** - RISC-V регистры для доступа к глобальным данным.

## 2. **Главная функция ISP** `FUN_0000033a`

```c
void FUN_0000033a() {
    // 1. Инициализация UART
    FUN_000032c4(uart_buf, 0, 0x40);  // Очистка UART буфера
    
    // 2. Копирование таблиц в RAM
    memcpy(0x40058, 0x40058, размер); // Таблицы SPI команд
    
    // 3. Инициализация SPI Flash
    FUN_00000c36();  // Настройка SPI
    
    // 4. Бесконечный цикл обработки команд
    while(1) {
        FUN_002f8(0);           // Ждем UART данные
        FUN_00332(cmd_table);   // Выполняем команду
        FUN_00bc2();            // Отправляем ответ
    }
}
```

## 3. **Обработчик прерываний** `FUN_00000120`

```c
void irq_handler() {
    if (mcause < 0) {           // Исключение
        FUN_00000510();         // Обработка ошибки
    } else {                    // IRQ
        FUN_00bde(irq_vector);  // Вызов вектора прерываний
    }
}
```

## 4. **UART/SLIP протокол** `FUN_000030ee`

```
SLIP framing:
C0 [данные] C0
Экранирование:
DB → DB DD
C0 → DB DC
```

```c
void send_slip_packet(data, len) {
    send_byte(0xC0);           // Начало пакета
    for each byte in data:
        if (byte == 0xDB) send(0xDB, 0xDD);
        if (byte == 0xC0) send(0xDB, 0xDC);
        else send(byte);
    send_byte(0xC0);           // Конец пакета
}
```

## 5. **Главный цикл команд** `FUN_00002abe`

```c
void process_commands() {
    while(1) {
        // 1. Читаем SLIP пакет
        packet = read_slip();
        
        // 2. Парсим команду
        cmd = packet[0];         // 0xC1=ECHO, 0xC2=NOP, 0xC3=WRITE...
        len = *(uint*)(packet+4);
        crc = *(uint*)(packet+8);
        
        // 3. Проверяем CRC32
        if (crc32(packet+12, len) != crc) {
            send_error(0xE2);    // BAD_CHECKSUM
            continue;
        }
        
        // 4. Выполняем по таблице команд
        cmd_table[cmd]();        // Переход к обработчику
    }
}
```

## 6. **SPI Flash драйвер**

### **Инициализация** `FUN_00002208`
```c
void spi_flash_init() {
    // Настройка SPI0/SPI1 (регистры 0x50440000)
    SPI_CTRL0 = 0x44;          // SPI0: 24-bit address
    SPI_CTRL1 = 0x45;          // SPI1: 24-bit address
    
    // Выбор чипа (SPI3=0, SPI0=1)
    FLASH_CHIP_SELECT(chip_type);
    
    // Таблица команд SPI
    spi_cmd_table[0] = 0x03;   // READ
    spi_cmd_table[1] = 0x02;   // PAGE_PROG
    spi_cmd_table[2] = 0x20;   // 4KB ERASE
    // ...
}
```

### **Запись во Flash** `FUN_00001c70`
```c
void flash_write(addr, data, len, mode) {
    spi_cmd(0x06, 0);          // Write Enable
    spi_cmd(0x02, addr);       // Page Program
    spi_transmit(data, len);   // Передача данных
}
```

## 7. **Команды ISP протокола**

| Команда | Hex | Описание |
|---------|-----|----------|
| ECHO | `0xC1` | Эхо-тест |
| NOP | `0xC2` | Ничего не делать |
| **MEMORY_WRITE** | `0xC3` | Загрузка в SRAM |
| **MEMORY_READ** | `0xC4` | Чтение SRAM |
| **MEMORY_BOOT** | `0xC5` | Запуск с адреса |
| BAUDRATE | `0xC6` | Смена скорости |

### **Flash команды** (режим Flash):
| Команда | Hex | Описание |
|---------|-----|----------|
| FLASH_INIT | `0xD7` | Инициализация |
| **FLASH_ERASE** | `0xD8` | Стирание |
| **FLASH_WRITE** | `0xD4` | Запись |
| FLASH_STATUS | `0xD9` | Статус |
| REBOOT | `0xD5` | Перезагрузка |

## 8. **CRC32 проверка** `FUN_000028f8`

```c
uint32_t crc32_update(uint32_t crc, uint8_t data) {
    crc ^= data;
    for(int i = 0; i < 8; i++) {
        crc = (crc >> 1) ^ (0xEDB88320 & -(crc & 1));
    }
    return crc;
}
```

## 9. **Последовательность загрузки**

```
1. UART 115200 → SLIP пакет
2. CRC32 OK → Парсинг команды  
3. Загрузка ISP bootloader → SRAM 0x80000000
4. BOOT(0x80000000) → Запуск ISP
5. Смена baudrate → 1.5-7.5Mbps
6. Flash INIT → SPI настройка
7. Flash ERASE → Стирание (опционально)
8. Flash WRITE → Загрузка firmware
9. REBOOT → Запуск firmware
```

## 🎨 **Регистры SPI Flash (0x50440000)**

```
50440000: SPI0_CTRL0    - Режим/скорость
50440008: SPI0_CTRL1    - Адрес/команда  
50440020: SPI0_CTRL2    - Дополнительно
50440038: SPI0_FCTRL    - Flash control
5044003C: SPI0_FCTRL1+2 - Flash timing
```

## 🚀 **Вывод**

**ISP bootloader** - это **компактный (65KB)** UART-over-SLIP протокол для:
- ✅ Загрузка кода в SRAM
- ✅ Программирование SPI Flash (1-16MB)
- ✅ Поддержка 26/40MHz Quad SPI
- ✅ CRC32 верификация
- ✅ Автобудрейт до 7.5Mbps

**Архитектура**: RISC-V + SPI Flash + SLIP + Zlib-сжатие!

**Ключевые фичи:**
- SLIP для надежной UART передачи
- CRC32 для целостности
- Non-blocking Flash операции
- SRAM bootloader для быстрой загрузки

Это **отличный пример embedded bootloader**! 👏
