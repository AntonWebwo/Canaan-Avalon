import sys
import time
import smbus
import os

# Файл для логирования ошибок
LOG_FILE = "ps_log"

def log_error(message):
    with open(LOG_FILE, "w") as log_file:
        log_file.write(f"{message}")

# Укажите адрес I2C устройства
I2C_ADDRESS = 0x2C

# Инициализация шины I2C
bus = smbus.SMBus(1)

def send_command(address, data):
    bus.write_i2c_block_data(address, data[0], data[1:])  # Отправляем массив байтов

def send_ps(command):
    try:
        if command == "on":
            # Отправка данных для включения
            for _ in range(5):  # Отправляем 5 раз
                send_command(I2C_ADDRESS, [0x12, 0x46, 0x05])  # Отправляем команду
                time.sleep(0.100)  # Ждем 99 миллисекунд
            log_error("PS OK")    
            # Отправляем команду для включения
            send_command(I2C_ADDRESS, [0x02, 0x01])  # Включаем

        if command == "off":
            log_error("PS OK") 
            # Отправка данных для выключения
            send_command(I2C_ADDRESS, [0x02, 0x00])  # Выключаем
    except OSError as e:
        log_error("PS BAD") 

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: python ps.py <on|off>")
        sys.exit(1)

    command = sys.argv[1].lower()
    send_ps(command)