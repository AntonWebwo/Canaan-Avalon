<?php

// Адрес хоста для конфигурации
$host = "10.4.167.253";
$user = "root";
$pass = "root";

// Подготовка данных формы
$postFields = [
    "pool1"      => "stratum+tcp://xxxxxxxxxxxxx:3333",
    "worker1"    => "venezmeg.k2lx",
    "passwd1"    => "xxxxxxxxxxxx",
    "pool2"      => "stratum+tcp://xxxxxxxxxxxxx:3333",
    "worker2"    => "venezmeg.k2lx",
    "passwd2"    => "xxxxxxxxxxxx",
    "pool3"      => "stratum+tcp://xxxxxxxxxxxxx:3333",
    "worker3"    => "xxxxxxxxxxxx",
    "passwd3"    => "x",
    "mode"       => "0", // High Performance
    "moreoption" => "--avalon10-temp 70" // Temperature Target
];

/*
mode:
"0" Normal Mode
"1" High Performance
"2" Power Mode
*/

// Кодируем данные для отправки
$postData = http_build_query($postFields);

// Инициализация cURL
$ch = curl_init();

curl_setopt_array($ch, [
    CURLOPT_URL            => "http://$host/cgconf.cgi",
    CURLOPT_RETURNTRANSFER => true,
    CURLOPT_POST           => true,
    CURLOPT_POSTFIELDS     => $postData,
    CURLOPT_HTTPAUTH       => CURLAUTH_DIGEST,
    CURLOPT_USERPWD        => "$user:$pass",
    CURLOPT_HEADER         => false,
    CURLOPT_TIMEOUT        => 30,
    CURLOPT_CONNECTTIMEOUT => 5,
    CURLOPT_HTTPHEADER     => [
        "Content-Type: application/x-www-form-urlencoded",
        "Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8"
    ]
]);

// Выполняем запрос
$response = curl_exec($ch);

// Проверяем наличие ошибок
if (curl_errno($ch)) {
    echo "Ошибка cURL: " . curl_error($ch);
} else {
    echo "✅ Конфигурация успешно отправлена!\n";
}

curl_close($ch);
