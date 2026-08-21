<?php

header('Content-Type: application/json'); // Устанавливаем заголовок для JSON

/**
 * Функция для получения температуры по значению HEX.
 */
function hexToTemperature($hex) {
    // Проверяем, является ли HEX значением корректным
    if (!preg_match('/^[0-9A-Fa-f]{1,2}$/', $hex)) {
        return -255;
    }

    // Преобразуем HEX в десятичное число
    $decimal = hexdec($hex);

    // Определяем температуру на основе таблицы
    $temperatureMap = [
        0 => 4, 1 => 4, 2 => 5, 3 => 6, 4 => 6, 5 => 7,
        6 => 8, 7 => 8, 8 => 9, 9 => 10, 10 => 10, 11 => 11,
        12 => 12, 13 => 12, 14 => 13, 15 => 14, 16 => 14,
        17 => 15, 18 => 16, 19 => 16, 20 => 17, 21 => 18,
        22 => 18, 23 => 19, 24 => 20, 25 => 20, 26 => 21,
        27 => 22, 28 => 22, 29 => 23, 30 => 24, 31 => 24,
        32 => 25, 33 => 26, 34 => 26, 35 => 27, 36 => 28,
        37 => 28, 38 => 29, 39 => 30, 40 => 30, 41 => 31,
        42 => 32, 43 => 32, 44 => 33, 45 => 34, 46 => 34,
        47 => 35, 48 => 36, 49 => 36, 50 => 37, 51 => 38,
        52 => 38, 53 => 39, 54 => 40, 55 => 40, 56 => 41,
        57 => 42, 58 => 42, 59 => 43, 60 => 44, 61 => 44,
        62 => 45, 63 => 46, 64 => 46, 65 => 47, 66 => 48,
        67 => 48, 68 => 49, 69 => 50, 70 => 50, 71 => 51,
        72 => 52, 73 => 52, 74 => 53, 75 => 54, 76 => 54,
        77 => 55, 78 => 56, 79 => 56, 80 => 57, 81 => 58,
        82 => 58, 83 => 59, 84 => 60, 85 => 60, 86 => 61,
        87 => 62, 88 => 62, 89 => 63, 90 => 64, 91 => 64,
        92 => 65, 93 => 66, 94 => 66, 95 => 67, 96 => 68,
        97 => 68, 98 => 69, 99 => 70, 100 => 70, 101 => 71,
        102 => 72, 103 => 72, 104 => 73, 105 => 74, 106 => 74,
        107 => 75, 108 => 76, 109 => 76, 110 => 77, 111 => 78,
        112 => 78, 113 => 79, 114 => 80, 115 => 80, 116 => 81,
        117 => 82, 118 => 82, 119 => 83, 120 => 84, 121 => 84,
        122 => 85, 123 => 86, 124 => 86, 125 => 87, 126 => 88,
        127 => 88, 128 => 89, 129 => 90, 130 => 90,
        131 => 91, 132 => 92, 133 => 92, 134 => 93, 135 => 94,
        136 => 94, 137 => 95, 138 => 96, 139 => 96, 140 => 97,
        141 => 98, 142 => 98 , 143 => 99, 144 => 100, 145 => 100,
        146 => 101, 147 => 102, 148 => 102, 149 => 103, 150 => 104,
        151 => 104, 152 => 105, 153 => 106, 154 => 106, 155 => 107,
        156 => 108, 157 => 108, 158 => 109, 159 => 110, 160 => 110,
        161 => 111, 162 => 112, 163 => 112, 164 => 113, 165 => 114,
        166 => 114, 167 => 115, 168 => 116, 169 => 116, 170 => 117,
        171 => 118, 172 => 118, 173 => 119, 174 => 120, 175 => 120,
        176 => 121, 177 => 122, 178 => 122, 179 => 123, 180 => 124,
        181 => 124, 182 => 125, 183 => 126, 184 => 126, 185 => 127,
        186 => 128, 187 => 128, 188 => 129, 189 => 130, 190 => 130,
        191 => 131, 192 => 132, 193 => 132, 194 => 133, 195 => 134,
        196 => 134, 197 => 135, 198 => 136, 199 => 136, 200 => 137,
        201 => 138, 202 => 138, 203 => 139, 204 => 140, 205 => 140,
        206 => 141, 207 => 142, 208 => 142, 209 => 143, 210 => 144,
        211 => 144, 212 => 145, 213 => 146, 214 => 146, 215 => 147,
        216 => 148, 217 => 148, 218 => 149, 219 => 150, 220 => 150,
        221 => 151, 222 => 152, 223 => 152, 224 => 153, 225 => 154,
        226 => 154, 227 => 155, 228 => 156, 229 => 156, 230 => 157,
        231 => 158, 232 => 158, 233 => 159, 234 => 160, 235 => 160,
        236 => 161, 237 => 162, 238 => 462, 239 => 163, 240 => 164,
        241 => 164, 242 => 165, 243 => 166, 244 => 166, 245 => 167,
        246 => 168, 247 => 168, 248 => 169, 249 => 170, 250 => 170,
        251 => 171, 252 => 172, 253 => 172, 254 => 173, 255 => 174
    ];

    return $temperatureMap[$decimal] ?? -255; // Возвращаем температуру или -255
}

function getTemperatureColor($temperature) {
    if ($temperature < 0 || $temperature > 175) return '#dc3545'; // Красный для вне диапазона
    if ($temperature <= 25) return interpolateColor('#007bff', '#00bfff', $temperature / 25); // Синий к голубому
    if ($temperature <= 50) return interpolateColor('#00bfff', '#28a745', ($temperature - 25) / 25); // Голубой к зеленому
    if ($temperature <= 75) return interpolateColor('#28a745', '#ffc107', ($temperature - 50) / 25); // Зеленый к желтому
    if ($temperature <= 100) return interpolateColor('#ffc107', '#fd7e14', ($temperature - 75) / 25); // Желтый к оранжевому
    if ($temperature <= 125) return interpolateColor('#fd7e14', '#dc3545', ($temperature - 100) / 25); // Оранжевый к красному
    if ($temperature <= 150) return interpolateColor('#dc3545', '#800000', ($temperature - 125) / 25); // Красный к бордовому
    if ($temperature <= 175) return interpolateColor('#800000', '#6f42c1', ($temperature - 150) / 25); // Бордовый к фиолетовому
    return '#343a40'; // По умолчанию
}

function interpolateColor($color1, $color2, $factor) {
    $r1 = hexdec(substr($color1, 1, 2));
    $g1 = hexdec(substr($color1, 3, 2));
    $b1 = hexdec(substr($color1, 5, 2));
    $r2 = hexdec(substr($color2, 1, 2));
    $g2 = hexdec(substr($color2, 3, 2));
    $b2 = hexdec(substr($color2, 5, 2));
    
    // Ограничиваем значения от 0 до 1
    $factor = max(0, min(1, $factor));
    
    $r = round($r1 + $factor * ($r2 - $r1));
    $g = round($g1 + $factor * ($g2 - $g1));
    $b = round($b1 + $factor * ($b2 - $b1));
    
    return sprintf("#%02x%02x%02x", $r, $g, $b);
}

// Включаем блок питания и ждем
shell_exec("sudo python3 ps.py on > /dev/null 2>&1 &");
usleep(700000);
$ps_log = file_get_contents('ps_log');
if($ps_log !== "PS OK") die(json_encode(["error"=>"ps"]));
// Поднимаем GPIO и запускаем тест
shell_exec("sudo python3 ri.py up > /dev/null 2>&1 &");
shell_exec("sudo python3 temp.py > /dev/null 2>&1 &");
usleep(850000);

// Опускаем GPIO и выключаем блок питания
shell_exec("sudo python3 ri.py down > /dev/null 2>&1 &");
shell_exec("sudo python3 ps.py off > /dev/null 2>&1 &");

usleep(600000);
exec("sudo python3 ps.py off > /dev/null 2>&1 &");



$content = file_get_contents('result') ?: die(json_encode(["error"=>"result"]));

// Получение данных, начиная с 6302 символа
$data = substr($content, 37585);

// Разделяем строку по 8 нулям и инициализируем массив для результатов
$parts = explode(str_repeat('0', 16), $data);
$result = [];

// Ищем подстроки, начинающиеся с "33"
foreach ($parts as $part) {
    preg_match_all('/(33[0-9A-F]*)/', $part, $matches);
    if (!empty($matches[0])) {
        $result = array_merge($result, $matches[0]);
    }
 }

// Инициализируем массив для результатов
$return = [];

// Перебираем массив
foreach ($result as $value) {
    if (strlen($value) === 65) {
        $first_value = substr($value, 2, 2);
        $second_value = substr($value, 51, 2);

        // Проверяем, является ли HEX значением корректным
        if (preg_match('/^[0-9A-Fa-f]{1,2}$/', $first_value)) {
            // Преобразуем HEX в десятичное число
            $decimal = hexdec($first_value) + 1;
            $return[$decimal] = hexToTemperature($second_value);
        }

    }
}

$show = []; // Инициализация пустого массива
$chip = 1;
for ($i = 0; $i < 120; $i++) {

    if($return[$chip]){
        $getTemp = $return[$chip];
        if($getTemp < 0 or $getTemp > 174){$temp = -255;}
        else{$temp = $getTemp;}
    }else{
        $temp = 'Error';
    }    


    $show[$i]['chip'] = $chip; // Присваиваем номер чипа

    if($temp != 'Error'){
        $backgroundColor = getTemperatureColor($temp);
        $textColor = '#111';        
        $show[$i]['temp'] = $temp."°C";
    }
    else{
        $backgroundColor = '#343a40';
        $textColor = '#fd7e14';   
        $show[$i]['temp'] = 'Error';
    }    
    $show[$i]['bg'] = $backgroundColor;
    $show[$i]['font'] = $textColor;

    $chip++; // Увеличиваем номер чипа
}

// Выводим результат в формате JSON

echo json_encode($show); // Преобразуем массив в JSON и выводим