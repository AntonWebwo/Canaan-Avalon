<?php

function longToBytes($val, $length, $endianness = 'little') {
    $bytes = [];
    for ($i = 0; $i < $length; $i++) {
        $bytes[] = ($val >> ($i * 8)) & 0xFF;
    }

    if ($endianness === 'big') {
        $bytes = array_reverse($bytes);
    }

    return $bytes;
}

function prepareUpgradeParam($apiVersion, $fileSize, $uid, $version, $offset, $payload) {
    // Подготавливаем параметры прошивки согласно формату
    $param = [];

    $endianFlag = 0;   // Little endian
    $byte0 = ($endianFlag << 7) | $apiVersion;
    $param[] = $byte0;

    $headerLen = 30;
    $param[] = $headerLen;

    $cmdID = rand(1, 32767); // 2 bytes
    $param = array_merge($param, longToBytes($cmdID, 2));

    $subCmd = 0x0;
    $param[] = $subCmd;

    $reserved1 = 0x000000;
    $param = array_merge($param, longToBytes($reserved1, 3));

    $param = array_merge($param, longToBytes($uid, 4));

    $versionPadded = str_pad(substr($version, 0, 8), 8, '0', STR_PAD_LEFT);
    foreach (str_split($versionPadded) as $char) {
        $param[] = ord($char);
    }

    $param = array_merge($param, longToBytes($fileSize, 4));
    $param = array_merge($param, longToBytes($offset, 4));
    $payloadLen = strlen($payload);
    $param = array_merge($param, longToBytes($payloadLen, 2));

    $reserved2 = 0x0000;
    $param = array_merge($param, longToBytes($reserved2, 2));

    // Добавляем сам payload
    foreach (str_split($payload) as $char) {
        $param[] = ord($char);
    }

    // Конвертируем в hex строку
    $hexStr = '';
    foreach ($param as $byte) {
        $hexStr .= sprintf('%02x', $byte);
    }

    return $hexStr;
}

function sendUpgradeCommand($ip, $port, $paramHex, $retries = 5) {
    $attempt = 0;

    while ($attempt < $retries) {
        $socket = socket_create(AF_INET, SOCK_STREAM, SOL_TCP);
        if (!$socket) {
            die("Не удалось создать сокет\n");
        }

        // Установим таймауты 
        socket_set_option($socket, SOL_SOCKET, SO_RCVTIMEO, ["sec" => 0, "usec" => 100000]);
        socket_set_option($socket, SOL_SOCKET, SO_SNDTIMEO, ["sec" => 0, "usec" => 100000]);

        if (@socket_connect($socket, $ip, $port)) {
            $command = json_encode([
                "command" => "ascset",
                "parameter" => "0,upgrade," . $paramHex
            ]);

            echo("$command\n");//Debug

            socket_write($socket, $command, strlen($command));

            $response = '';
            while ($buf = @socket_read($socket, 1024)) {
                $response .= $buf;
            }

            socket_close($socket);

            return trim($response);
        } else {
            $attempt++;
            echo socket_strerror(socket_last_error($socket)) . "\n";
            socket_close($socket);
            usleep(100000); // 0.1 секунды
        }
    }

    return false;
}

// =================== ОСНОВНОЙ КОД ====================

$ip = "10.1.163.11";     // IP устройства
$port = 4028;              // Порт CGMiner API
$firmwarePath = "A1246-A3201-Plus.aup";

if (!file_exists($firmwarePath)) {
    die("Файл прошивки не найден!\n");
}

$firmwareData = file_get_contents($firmwarePath);
$fileSize = strlen($firmwareData);
$chunkSize = 512; // попробуйте так
$offset = 0;
$uid = 12345;
$version = "v1.0";
$apiVersion = 2;

echo "Начало прошивки...\n";

while ($offset < $fileSize) {
    $chunk = substr($firmwareData, $offset, $chunkSize);
    $payloadLen = strlen($chunk);

    $paramHex = prepareUpgradeParam($apiVersion, $fileSize, $uid, $version, $offset, $chunk);

    $response = sendUpgradeCommand($ip, $port, $paramHex);

    if ($response === false) {
        echo "Ошибка при отправке команды.\n";
        exit(1);
    }

    echo "$response\n";

    // Здесь можно проверить JSON-ответ на ошибки (например Code != 200 или STATUS != S)

    $offset += $payloadLen;

    usleep(250); // 0.1 секунды между чанками

}

echo "Прошивка завершена.\n";
