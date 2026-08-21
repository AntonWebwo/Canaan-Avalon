<?php
$chipOrder = [[3, 4, 9, 10, 15, 16, 21, 22, 27, 28, 33, 34, 39, 40, 45, 46, 51, 52, 57, 58], 
              [2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35, 38, 41, 44, 47, 50, 53, 56, 59], 
              [1, 6, 7, 12, 13, 18, 19, 24, 25, 30, 31, 36, 37, 42, 43, 48, 49, 54, 55, 60], 
              [120, 115, 114, 109, 108, 103, 102, 97, 96, 91, 90, 85, 84, 79, 78, 73, 72, 67, 66, 61], 
              [119, 116, 113, 110, 107, 104, 101, 98, 95, 92, 89, 86, 83, 80, 77, 74, 71, 68, 65, 62], 
              [118, 117, 112, 111, 106, 105, 100, 99, 94, 93, 88, 87, 82, 81, 76, 75, 70, 69, 64, 63]];

foreach ($chipOrder as $row => $chips) {
    foreach ($chips as $col => $chip) {
        echo "<div id='chip-{$chip}' class='chip'>
                <div class='number' style='font-weight: bold;'></div>
                <div class='value' style='font-weight: bold;'>{$chip}</div>
              </div>";
    }
}

function getRaspberryPiID() {
    $cpuInfo = file_get_contents('/proc/cpuinfo');
    if ($cpuInfo === false) {
        return "Не удалось получить информацию о CPU.";
    }
    $lines = explode("\n", $cpuInfo);
    foreach ($lines as $line) {
        if (strpos($line, 'Serial') !== false) {
            // Извлекаем ID, который находится после двоеточия
            $parts = explode(':', $line);
            $id = trim($parts[1]);
            // Возвращаем первые 16 символов хеша MD5
            return substr(md5($id), 0, 16);
        }
    }
    return "Уникальный идентификатор не найден.";
}
?>
