<?php

function readAUPFile($filePath) {
    // Открываем файл в бинарном режиме
    $file = fopen($filePath, 'rb');
    if (!$file) {
        die("Не удалось открыть файл.");
    }

    // Чтение заголовка прошивки (0x00 - 0x09)
    fseek($file, 0x00);
    $header = fread($file, 10); // 10 байт от 0 до 9

    // Чтение версии прошивки (0x18 - 0x2F)
    fseek($file, 0x18);
    $version = fread($file, 24); // 24 байта от 0x18 до 0x2F

    // Чтение типа устройства 1 (0x64 - 0x6B)
    fseek($file, 0x64);
    $deviceType1 = fread($file, 8); // 8 байт от 0x64 до 0x6B

    // Чтение типа устройства 2 (0x84 - 0x88)
    fseek($file, 0x84);
    $deviceType2 = fread($file, 5); // 5 байт от 0x84 до 0x88

    // Чтение типа устройства 3 (0xA4 - 0xAC)
    fseek($file, 0xA4);
    $deviceType3 = fread($file, 9); // 9 байт от 0xA4 до 0xAC

    // Чтение CRC32 заголовка (0xC4 - 0xC7)
    fseek($file, 0xC4);
    $crc32Bytes = fread($file, 4); // 4 байта
    $crc32Hex = bin2hex(strrev($crc32Bytes)); // Переворачиваем байты и конвертируем в hex

    // Чтение размера прошивки (0x14 - 0x17)
    fseek($file, 0x14);
    $sizeBytes = fread($file, 4); // 4 байта
    $sizeHex = bin2hex(strrev($sizeBytes)); // Переворачиваем байты
    $sizeDec = hexdec($sizeHex); // Конвертируем в десятичное значение

    // Чтение последних 32 байт файла (SHA256)
    fseek($file, -32, SEEK_END);
    $sha256 = fread($file, 32); // 32 байта SHA256

    fclose($file);

    // Вывод данных
    echo "Заголовок прошивки: " . trim($header) . "\n";
    echo "Версия прошивки: " . trim($version) . "\n";
    echo "Тип устройства 1: " . trim($deviceType1) . "\n";
    echo "Тип устройства 2: " . trim($deviceType2) . "\n";
    echo "Тип устройства 3: " . trim($deviceType3) . "\n";
    echo "CRC32 заголовка: " . strtoupper($crc32Hex) . "\n";
    echo "Размер прошивки (HEX): " . strtoupper($sizeHex) . "\n";
    echo "Размер прошивки (DEC): " . $sizeDec . "\n";
    echo "SHA256 контрольная сумма: " . bin2hex($sha256) . "\n";
}

// Пример использования
if (isset($_FILES['firmware'])) {
    $uploadDir = 'uploads/';
    $uploadFile = $uploadDir . basename($_FILES['firmware']['name']);
    
    if (move_uploaded_file($_FILES['firmware']['tmp_name'], $uploadFile)) {
        readAUPFile($uploadFile);
    } else {
        echo "Ошибка загрузки файла.";
    }
} else {
    echo "Файл не был загружен.";
}
?>
