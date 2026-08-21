import pigpio

# Инициализация pigpio
pi = pigpio.pi()

# Настройка SPI
SPI_CHANNEL = 0  # SPI 0
SPI_SPEED = 500000  # 500 кГц
spi_handle = pi.spi_open(SPI_CHANNEL, SPI_SPEED, pigpio.SPI_MODE_0)

# Данные для отправки в виде байтов
null = bytes.fromhex('00' * 32)  # 64 нулевых байта

data_packets = [
    bytes.fromhex('33FF020001D0A00000021ADC000000030C8000080064D000'),
    bytes.fromhex('33FF020001D0A00000121834000000030C80105000E85000'),
    bytes.fromhex('33FF020001D0A00000125A64000000030C800000406A3000'),
    bytes.fromhex('33FF020001D0A000000E1AC4000000030C80000000E87000'),
    bytes.fromhex('33FF020001D0A000000E38BC000000030C80000000E87000'),
    bytes.fromhex('33FF020001D0A000000E5894000000030C80000000E87000'),
    bytes.fromhex('33FF000401DBE00000001864000000030C80000000619000'),
    bytes.fromhex('33FF020001D0A0000002F864000000030C80000000E87000'),
    bytes.fromhex('33FF020001D0A0000002DA1C000000030C80000000E87000'),
    bytes.fromhex('33FF020001D0A00000033A04000000030C8000001DEA5000'),
    bytes.fromhex('33FF020001D0A000000A1804000000030C8000234466F000'),
    bytes.fromhex('33FF020001D0A00000021ADC000000030C8000080064D000'),
    bytes.fromhex('33FF020001D0A00000027AF4000000030C80000000619000'),
    bytes.fromhex('33FF020008D6600000005A34000000030C88888888E1911111111C3222222223864444444470C88888888E1911111111C322222222386400000447378000'),
    bytes.fromhex('33FF020001D0A00000021ADC000000030C870008806DD000'),
    bytes.fromhex('33FF020001D0A000000E1AC4000000030C80000000E87000'),
    bytes.fromhex('33FF020001D0A000000E38BC000000030C80000000E87000'),
    bytes.fromhex('33FF020001D0A000000E5894000000030C80000000E87000'),
    bytes.fromhex('3300040001D4200000021ADC000000030C0000000060000000000C00000000018000')
]

# # Формирование данных для отправки
data_to_send = (null * 100) + (null.join(data_packets)) + (null * 2)

response = pi.spi_xfer(spi_handle, data_to_send)

# Обработка ответа
result = response[1]  # response[1] содержит данные, полученные от устройства

# Запись результата в текстовый файл в HEX-формате
with open('result', 'w') as f:
    f.write(result.hex().upper())  # Преобразуем в HEX и записываем в файл

# Закрытие SPI
pi.spi_close(spi_handle)

# Остановка pigpio
pi.stop()