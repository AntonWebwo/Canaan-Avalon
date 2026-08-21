import pigpio
import sys

# Инициализация pigpio
pi = pigpio.pi()

# Настройка GPIO
GPIO_PIN = 19
pi.set_mode(GPIO_PIN, pigpio.OUTPUT)  # Устанавливаем пин как выходной

# Подъем или опускание GPIO
if sys.argv[1] == 'up':
    # Поднимаем GPIO19 перед отправкой
    pi.write(GPIO_PIN, 1)  # Устанавливаем высокий уровень

elif sys.argv[1] == 'down':
    # Поднимаем GPIO19 перед отправкой
    pi.write(GPIO_PIN, 0)  # Устанавливаем высокий уровень       

# Остановка pigpio
pi.stop()