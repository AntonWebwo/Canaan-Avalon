<?php

header('Content-Type: application/json');

function getChipColor($status) {
    return $status === 1 ? '#28a745' : '#dc3545';
}

function getTextColor($status) {
    return $status === 1 ? '#f8f9fa' : '#343a40';
}

$signals = [];

exec("sudo python3 ps.py on > /dev/null 2>&1 &");
exec("sudo python3 ri.py up > /dev/null 2>&1 &");
usleep(500000);
$ps_log = file_get_contents('ps_log');
if($ps_log !== "PS OK") die(json_encode(["error"=>"ps"]));
exec("sudo python3 ro.py up > /dev/null 2>&1 &");
exec("sudo python3 test.py > /dev/null 2>&1 &");
usleep(30000);
exec("sudo python3 ri.py down > /dev/null 2>&1 &");
usleep(150000);
exec("sudo python3 ps.py off > /dev/null 2>&1 &");
usleep(300000);



usleep(500000);
exec("sudo python3 ps.py off > /dev/null 2>&1 &");

$content = file_get_contents('result') ?: die(json_encode(["error"=>"result"]));

$gpioState = file_get_contents('ro_log');
$signals["ro"] = trim($gpioState);

$data = substr($content, 6302);
$parts = explode(str_repeat('0', 20), $data);
$result = [];

foreach ($parts as $part) {
    preg_match_all('/(33[0-9A-F]*)/', $part, $matches);
    if (!empty($matches[0])) {
        $result = array_merge($result, $matches[0]);
    }
}

// Получаем 4 символов, начиная с 0-го символа
$start = substr(end($result), 0, 6);

// Получаем 14 символов, начиная с 42-го символа
$charsAfter42 = substr(end($result), 42, 14);

// Получаем длину строки
$stringLength = strlen($charsAfter42);

$firstThreeChars = substr($charsAfter42, 0, 3);
if($start == "330004" && $firstThreeChars == "FB7"){
    $signals["do"] = "OK";
    $asic = 120;
}else{
    $asic = 119;
    $signals["do"] = "Error";
}

if($stringLength == 0){
    $asic = 0;
    $signals["do"] = "Null";
}

$show = [];
$activeChips = min($asic, 120);
$inactiveChips = 120 - $activeChips;

for ($i = 0; $i < 120; $i++) {
    $status = $i < $activeChips ? 1 : 0;
    $show[$i] = [
        'chip' => $i + 1,
        'bg' => getChipColor($status),
        'font' => getTextColor($status)
    ];
}

$show['result'] = json_encode($signals);
$show['do'] = json_encode($result);

echo json_encode($show);