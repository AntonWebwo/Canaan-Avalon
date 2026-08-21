import pigpio
import sys

pi = pigpio.pi()

if not pi.connected:
    sys.exit(1)

GPIO_PIN = 26
pi.set_mode(GPIO_PIN, pigpio.INPUT)

# Ожидаем изменения состояния на GPIO_PIN
# pigpio.RISING - ожидаем перехода на высокий уровень
# pigpio.FALLING - ожидаем перехода на низкий уровень
# pigpio.EITHER_EDGE - ожидаем любое изменение
level = pi.wait_for_edge(GPIO_PIN, pigpio.RISING)

# Записываем состояние в файл
with open('ro_log', 'w') as f:
    if level is not None:
        if level == 1:
            f.write("OK")
        else:
            f.write("Error")
    else:
        f.write("Null")

pi.stop()