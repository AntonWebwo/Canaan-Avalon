<?php

header('Content-Type: application/json'); // Устанавливаем заголовок для JSON

// Функция для преобразования HEX в DEC
function hexToDec($hex) {
    return hexdec($hex);
}

function calculate($number) {
    $step = ($number - 3172);
    $step = $step * 2;
    $step = $step + 8;
    return $step - 80;
}

// Функция для проверки корректности HEX
function isValidHex($hex) {
    // Проверяем, что длина строки равна 3 и состоит только из символов 0-9 и A-F
    return (strlen($hex) === 3 && preg_match('/^[0-9A-F]{3}$/i', $hex));
}

function getVoltageColor($voltage) {
    if ($voltage < 100 || $voltage > 400) return '#dc3545';
    $minVoltage = 100;
    $maxVoltage = 400;
    $range = $maxVoltage - $minVoltage;
    $step = $range / 7;
    $colors = ['#6f42c1', '#007bff', '#20c997', '#28a745', '#ffc107', '#fd7e14', '#dc3545'];
    for ($i = 0; $i < 6; $i++) {
        if ($voltage <= $minVoltage + ($i + 1) * $step) {
            return interpolateColor($colors[$i], $colors[$i + 1], ($voltage - ($minVoltage + $i * $step)) / $step);
        }
    }
    return '#343a40';
}

function interpolateColor($color1, $color2, $factor) {
    $r1 = hexdec(substr($color1, 1, 2));
    $g1 = hexdec(substr($color1, 3, 2));
    $b1 = hexdec(substr($color1, 5, 2));
    $r2 = hexdec(substr($color2, 1, 2));
    $g2 = hexdec(substr($color2, 3, 2));
    $b2 = hexdec(substr($color2, 5, 2));
    $r = round($r1 + $factor * ($r2 - $r1));
    $g = round($g1 + $factor * ($g2 - $g1));
    $b = round($b1 + $factor * ($b2 - $b1));
    return sprintf("#%02x%02x%02x", $r, $g, $b);
}

function getTextColor($backgroundColor) {
    $r = hexdec(substr($backgroundColor, 1, 2));
    $g = hexdec(substr($backgroundColor, 3, 2));
    $b = hexdec(substr($backgroundColor, 5, 2));
    $brightness = ($r * 0.299 + $g * 0.587 + $b * 0.114);
    return ($brightness > 50) ? '#000000' : '#ffffff';
}

// Включаем блок питания и ждем
exec("sudo python3 ps.py on > /dev/null 2>&1 &");
exec("sudo python3 ri.py up > /dev/null 2>&1 &");
usleep(700000);
$ps_log = file_get_contents('ps_log');
if($ps_log !== "PS OK") die(json_encode(["error"=>"ps"]));
// Поднимаем GPIO и запускаем тест

exec("sudo python3 volt.py > /dev/null 2>&1 &");
usleep(850000);

// Опускаем GPIO и выключаем блок питания
exec("sudo python3 ri.py down > /dev/null 2>&1 &");
exec("sudo python3 ps.py off > /dev/null 2>&1 &");

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

        $binaryString = '';
        foreach (str_split($value) as $char) {

            $binaryString .= str_pad(decbin(hexdec($char)), 4, '0', STR_PAD_LEFT);
        }

        // Извлекаем 12 бит после 187-го бита
        $startBit = 187;
        $tempBits = substr($binaryString, $startBit, 12);

        // Преобразуем 12 бит в HEX
        $tempHEX = strtoupper(dechex(bindec($tempBits)));

        if (isValidHex($tempHEX)) {
            $decimal = hexdec($first_value) + 1;
            $decValue = hexToDec($tempHEX);
            $return[$decimal] = calculate($decValue);
        }

    }
}

$show = []; // Инициализация пустого массива
$chip = 1;
for ($i = 0; $i < 120; $i++) {

    if($return[$chip]){
        $getVolt = $return[$chip];
        if($getVolt < 0 or $getVolt > 1000){$volt = 0;}
        else{$volt = $getVolt;}
    }else{
        $volt = 'Error';
    }

    $show[$i]['chip'] = $chip; // Присваиваем номер чипа

    if($volt != 'Error'){
        $backgroundColor = getVoltageColor($volt);
        $textColor = getTextColor($backgroundColor);        
        $show[$i]['volt'] = $volt." mV";      
    }
    else{
        $backgroundColor = '#343a40';
        $textColor = '#fd7e14';            
        $show[$i]['volt'] = 'Error';
    }

    $show[$i]['bg'] = $backgroundColor;
    $show[$i]['font'] = $textColor;      

    $chip++; // Увеличиваем номер чипа
}

// Выводим результат в формате JSON

echo json_encode($show); // Преобразуем массив в JSON и выводим