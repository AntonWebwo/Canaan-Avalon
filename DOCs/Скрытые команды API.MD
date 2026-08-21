# Руководство по скрытым командам Avalon API

## Введение

Это руководство предназначено для разработчиков и администраторов, работающих с устройствами **Avalon ASIC**, которые поддерживают взаимодействие через **Avalon API**. Здесь описаны **скрытые команды**, используемые для управления, диагностики, обновления прошивки и тонкой настройки оборудования.

---

## Общие команды

### Отключение гарантии (OOW)

```bash
ascset|0,no-warranty
```

**Ответ API:**  
`Msg=ASC 0 set failed: FAIL: Product is already Out-Of-Warranty!`

---

### Перезагрузка устройства

```bash
ascset|0,reboot,0
```

---

### Программное выключение

```bash
ascset|0,softoff,0
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Программное включение

```bash
ascset|0,softon,0
```

**Описание:** Перезагружает ASIC.

---

### Вход в заводской режим

```bash
ascset|0,factory,0
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Обновление прошивки

```bash
ascset|0,upgrade,<HEX_DATA>
```

**Пример HEX данных:**  
`021e8a4200000000393000003030303076312e30...`

**Ответ API:**  
`Msg=ASC 0 set info: OK: cmdid:428a filesize:c0908 offset:0 payload_len:200`

---

## Параметры ASIC и тюнинга

### Режим агинга

#### Включить/выключить режим агинга

```bash
ascset|0,aging-set,1
```

**Ответ API:**  
`Msg=ASC 0 set info: set aging mode success\aging working...`

---

#### Установка максимального уровня напряжения при агинге

```bash
ascset|0,aging-max-vol,69
```

**Ответ API:**  
`Msg=ASC 0 set info: voltage level limit set to 69 .`

---

#### Установка максимальной мощности при агинге

```bash
ascset|0,aging-max-pow,2500
```

**Ответ API:**  
`Msg=ASC 0 set info: power limit set to 2500 .`

---

#### Дополнительные параметры агинга

```bash
ascset|0,aging-parameter,69-400:420:440:460
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Настройка напряжения

#### Период корректировки напряжения

```bash
ascset|0,volt-adjust-period,1
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

#### Автонастройка напряжения

```bash
ascset|0,volt-adjust-switch,1
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Частота и SSDN Pro

#### Интеллектуальная настройка частоты

```bash
ascset|0,smart-speed,1
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

#### Включение SSDN Pro

```bash
ascset|0,ssdn-pro,1
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Частота и напряжение

#### Минимальная частота

```bash
ascset|0,freq-low,400-0
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

#### Максимальная частота

```bash
ascset|0,freq-high,400-0
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

#### Минимальное напряжение

```bash
ascset|0,volt-low,69-0
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

#### Максимальное напряжение

```bash
ascset|0,volt-high,70-0
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Температурные и вентиляционные параметры

#### Целевая температура

```bash
ascset|0,target-temp,65
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

#### Скорость вентилятора (%)

```bash
ascset|0,fan-spd,50
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Hash OD

#### Включение/выключение Hash OD

```bash
ascset|0,hash-od,1
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

## Диагностика и логирование

### Проверка CRC

```bash
ascset|0,scancrc
```

**Ответ API:**  
`Msg=ASC 0 set info: ASICCRC0[...] ASICCRC1[...] ASICCRC2[...]`

---

### Глобальные настройки вентилятора

```bash
ascset|0,fan-global
```

**Ответ API:**  
`Msg=ASC 0 set info: Fan0[0] Fan1[0] Fan2[0] Fan3[0]`

---

### Глобальная температура

```bash
ascset|0,temp-global
```

**Ответ API:**  
`Msg=ASC 0 set info: PVT_T0[...] PVT_T1[...] PVT_T2[...]`

---

### Получение SPD лога

```bash
ascset|0,spdlog,0
```

**Ответ API:**  
`Msg=ASC 0 set info: spdlog[875822 19073]`

---

## Фабричные команды

### PLL в заводском режиме

```bash
ascset|0,factory-pll,500
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Напряжение в заводском режиме

```bash
ascset|0,factory-volt,69
```

**Ответ API:**  
`Msg=ASC 0 set OK`

---

### Установка заводских настроек пула

```bash
ascset|0,poolsfactory
```

**Ответ API:**  
`Msg=ASC 0 set info: Success set to poolsfatory. Please reboot miner to make config work.`

---

## Заключение

Эти скрытые команды позволяют получить полный контроль над вашими устройствами Avalon ASIC. Используйте их с осторожностью — неправильная настройка может повлиять на стабильность работы или привести к выходу оборудования из строя.

> ⚠️ **Внимание:** Перед выполнением критических команд рекомендуется создать резервную копию текущих настроек и убедиться в их обратимости.