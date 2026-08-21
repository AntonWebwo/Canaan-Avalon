(function (doc, win) {
    var docEl = doc.documentElement,
        resizeEvt = "onorientationchange" in window ? "onorientationchange" : "resize",
        recalc = function () {
            var clientWidth = docEl.clientWidth;
            if (!clientWidth) {
                return
            }
            if (clientWidth >= 750) {
                docEl.style.fontSize = "100px"
            } else {
                docEl.style.fontSize = 100 * (clientWidth / 750) + "px"
            }
        };
    if (!doc.addEventListener) {
        return
    }
    win.addEventListener(resizeEvt, recalc, false);
    doc.addEventListener("DOMContentLoaded", recalc, false)
})(document, window);

function $(id) {
    return document.getElementById(id)
}

function $$(id) {
    return document.getElementsByName(id)
}

function addClass(id, cls) {
    var elem = document.getElementById(id);
    elem.classList.add(cls)
}

function removeClass(id, cls) {
    var elem = document.getElementById(id);
    elem.classList.remove(cls)
}

function AJAX(url, callback) {
    var req = AJAX_init();
    req.onreadystatechange = AJAX_processRequest;
    function AJAX_init() {
        if (window.XMLHttpRequest) {
            return new XMLHttpRequest()
        } else {
            if (window.ActiveXObject) {
                return new ActiveXObject("Microsoft.XMLHTTP")
            }
        }
    }
    function AJAX_processRequest() {
        if (req.readyState == 4) {
            if (req.status == 200) {
                if (callback) {
                    callback(req.responseText)
                }
            }
        }
    }
    this.doGet = function () {
        req.open("GET", url, true);
        req.send(null)
    };
    this.doPost = function (body) {
        req.open("POST", url, true);
        req.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
        req.setRequestHeader("ISAJAX", "yes");
        req.send(body)
    }
}

(function () {
    var navWrap = document.getElementById("side_nav");
    if (!navWrap) return;
    var nav1s = navWrap.getElementsByTagName("li");
    var nav2s = navWrap.getElementsByTagName("ul");
    for (var i = 0,
        len = nav1s.length; i < len; i++) {
        nav1s[i].onclick = (function (i) {
            return function () {
                if (nav2s[i].style.display == "none") {
                    nav2s[i].style.display = "block"
                } else {
                    nav2s[i].style.display = "none"
                }
            }
        })(i)
    }
})();

function logout(o) {
    var win = confirm("Are you sure you want to logout?");
    var p = o.getAttribute("id");
    if (win == true) {
        cgiform.action = "logout.cgi";
        cgiform.submit()
    } else {
        return false
    }
}

function reboot(o) {
    var win = confirm("Are you sure you want to reboot?");
    var p = o.getAttribute("id");
    if (win == true) {
        cgiform.action = "reboot_btn.cgi";
        cgiform.submit()
    } else {
        return false
    }
}

function tabChange(o) {
    var url = o.getAttribute("pageid") + ".cgi";
    cgiform.action = url;
    cgiform.submit()
}

function UpdatePageCallback(req) {
    var pageId = req.pageId;
    var emList = document.getElementsByTagName("strong");
    for (var index = 0; index < emList.length; index++) {
        if (emList[index].getAttribute("pageid") == pageId) {
            emList[index].setAttribute("class", "cur");
            emList[index].previousElementSibling.setAttribute("class", "iconfont")
        } else {
            emList[index].setAttribute("class", "");
            emList[index].previousElementSibling.setAttribute("class", "")
        }
    }
}

function formatDateTime(inputTime) {
    var date = new Date(inputTime);
    var y = date.getFullYear();
    var m = date.getMonth() + 1;
    m = m < 10 ? ("0" + m) : m;
    var d = date.getDate();
    d = d < 10 ? ("0" + d) : d;
    var h = date.getHours();
    h = h < 10 ? ("0" + h) : h;
    var minute = date.getMinutes();
    var second = date.getSeconds();
    minute = minute < 10 ? ("0" + minute) : minute;
    second = second < 10 ? ("0" + second) : second;
    return y + "-" + m + "-" + d + " " + h + ":" + minute + ":" + second
}

function minerinfoCallback(req) {
    req.hwtype !== undefined ? req.hwtype : "";
    req.mac !== undefined ? req.mac : "";
    req.ipv4 !== undefined ? req.ipv4 : "";
    req.version !== undefined ? req.version : "";
    $("hwtype").innerHTML = req.hwtype;
    $("loadtime").innerHTML = formatDateTime(new Date().getTime());
    var html = "";
    var css = "";
    if (req.sys_status == "1") {
        html = "Online";
        css = "status on"
    } else {
        html = "Idle";
        css = "status off"
    }
    $("sys_status").innerHTML = html;
    $("sys_status").setAttribute("class", css);
    $("mac").innerHTML = req.mac;
    $("ipv4").innerHTML = req.ipv4;
    $("version").innerHTML = req.version
}

function updateMinerInfo() {
    var oUpdate;
    oUpdate = new AJAX("get_minerinfo.cgi?num=" + Math.random(),
        function (t) {
            try {
                eval(t)
            } catch (e) { }
        });
    oUpdate.doGet();
    setTimeout(updateMinerInfo, 15000)
}

updateMinerInfo();

function tempSwitch(o) {
    var tmp = o.getAttribute("switchid");
    if (tmp == "temp1") {
        $("temp_show").style.display = "block";
        $("tempf_show").style.display = "none"
    } else {
        $("temp_show").style.display = "none";
        $("tempf_show").style.display = "block"
    }
}

var _i = 96;
var _av = 0;
var series = [];
var series1 = [];

function secondsFormat(s) {
    var day = Math.floor(s / (24 * 3600));
    var hour = Math.floor((s - day * 24 * 3600) / 3600);
    var minute = Math.floor((s - day * 24 * 3600 - hour * 3600) / 60);
    var second = s - day * 24 * 3600 - hour * 3600 - minute * 60;
    return {
        day: day,
        hour: hour,
        minute: minute,
        second: second
    }
}

var arr = ["power", "hash2", "hash1", "hash0", "fan4", "fan3", "fan2", "fan1"];
var err = [];
var timmer;
var index = 0;

function minerstatusShow() {
    if (index == err.length) index = 0;
    $("minerstatus").innerHTML = err[index];
    index++;
}

function homeCallback(req) {
    _hash_5m = req.hash_5m !== undefined ? req.hash_5m : 0;
    _av = req.av !== undefined ? req.av : 0;
    clearInterval(timmer);
    index = 0;

    err = [];
    var count = 0;
    var minerstatus = req.minerstatus;
    for (var i = 0; i < minerstatus.length; i++) {
        if (minerstatus.charAt(i) == "1") {
            err.push(arr[i]);
            count++;
        }
    }
    var msCls = "";
    if (count > 0) {
        msCls = "val red-round";
        minerstatusShow();
        timmer = setInterval("minerstatusShow()", 500);
    } else {
        msCls = "val green-round";
        $("minerstatus").innerHTML = "Fine";
    }
    $("minerstatus_out").setAttribute("class", msCls);

    var networkstatus = req.ping;
    var msCls = "";
    var msVal = "";
    if (networkstatus == "0") {
        msCls = "val red-round";
        msVal = networkstatus
    } else {
        msCls = "val green-round";
        msVal = networkstatus
    }
    $("networkstatus_out").setAttribute("class", msCls);
    $("networkstatus").innerHTML = msVal;

    $("fanr").innerHTML = req.fanr + "%";
    var fan1 = req.fan1;
    var fan2 = req.fan2;
    var fan3 = req.fan3;
    var fan4 = req.fan4;
    $("fan1").innerHTML = fan1;
    $("fan2").innerHTML = fan2;
    $("fan3").innerHTML = fan3;
    $("fan4").innerHTML = fan4;
    var msCls = "";
    if (fan1 == "0") {
        msCls = "fan red-bg";
    } else {
        msCls = "fan green-bg";
    }
    $("fan1").setAttribute("class", msCls);
    if (fan2 == "0") {
        msCls = "fan red-bg";
    } else {
        msCls = "fan green-bg";
    }
    $("fan2").setAttribute("class", msCls);
    if (fan3 == "0") {
        msCls = "fan red-bg";
    } else {
        msCls = "fan green-bg";
    }
    $("fan3").setAttribute("class", msCls);
    if (fan4 == "0") {
        msCls = "fan red-bg";
    } else {
        msCls = "fan green-bg";
    }
    $("fan4").setAttribute("class", msCls);

    var temp = req.temperature;
    var temp1 = req.MTavg1;
    var temp2 = req.MTavg2;
    var temp3 = req.MTavg3;
    var tempf = req.temperaturef;
    var temp1f = req.MTavg1f;
    var temp2f = req.MTavg2f;
    var temp3f = req.MTavg3f;

    $("temp").innerHTML = temp + "°C(T)";
    $("temp1").innerHTML = temp1 + "°C(H0)";
    $("temp2").innerHTML = temp2 + "°C(H1)";
    $("temp3").innerHTML = temp3 + "°C(H2)";
    $("tempf").innerHTML = tempf + "°F(T)";
    $("temp1f").innerHTML = temp1f + "°F(H0)";
    $("temp2f").innerHTML = temp2f + "°F(H1)";
    $("temp3f").innerHTML = temp3f + "°F(H2)";

    var tVal = parseInt(temp);
    var tVal1 = parseInt(temp1);
    var tVal2 = parseInt(temp2);
    var tVal3 = parseInt(temp3);
    var msCls = "";
    if (tVal <= 0 || tVal >= 90) {
        msCls = "temp red-bg"
    } else {
        msCls = "temp green-bg"
    }
    $("temp").setAttribute("class", msCls);
    $("tempf").setAttribute("class", msCls);
    if (tVal1 <= 0 || tVal1 >= 90) {
        msCls = "temp red-bg"
    } else {
        msCls = "temp green-bg"
    }
    $("temp1").setAttribute("class", msCls);
    $("temp1f").setAttribute("class", msCls);
    if (tVal2 <= 0 || tVal2 >= 90) {
        msCls = "temp red-bg"
    } else {
        msCls = "temp green-bg"
    }
    $("temp2").setAttribute("class", msCls);
    $("temp2f").setAttribute("class", msCls);
    if (tVal3 <= 0 || tVal3 >= 90) {
        msCls = "temp red-bg"
    } else {
        msCls = "temp green-bg"
    }
    $("temp3").setAttribute("class", msCls);
    $("temp3f").setAttribute("class", msCls);

    $("realtime").innerHTML = req.hash_5m;
    $("av").innerHTML = req.av;
    $("rejectedp").innerHTML = req.rejected_percentage;
    var elapsed = req.elapsed;
    var s = parseInt(req.elapsed);
    if (s < 0) {
        s = 0
    }
    var time = secondsFormat(s);
    $("day").innerHTML = time.day;
    $("hour").innerHTML = time.hour;
    $("minute").innerHTML = time.minute;
    $("second").innerHTML = time.second;
    $("url").innerHTML = req.url;
    $("worker").innerHTML = req.worker;
    var accepted = $("accepted").innerHTML;
    var rejected = $("rejected").innerHTML;
    if (accepted != req.accepted && rejected != req.reject) {
        $("accepted").innerHTML = req.accepted;
        $("rejected").innerHTML = req.reject;
        var accepted = parseInt(req.accepted);
        var rejected = parseInt(req.reject);
        loadPieData(accepted, rejected)
    }
    
    // Добавляем данные в массивы для графиков
    var x = (new Date()).getTime();
    var y = parseFloat(_hash_5m);
    var y1 = parseFloat(_av);
    
    series.push({x: x, y: y});
    series1.push({x: x, y: y1});
    
    // Ограничиваем количество точек для производительности
    if (series.length > 100) {
        series.shift();
        series1.shift();
    }
    
    // Обновляем линейный график
    updateLineChart();
}

// Инициализация графиков
let pieChart, lineChart;

function initCharts() {
    // Инициализация круговой диаграммы
    const pieCtx = document.getElementById('piechart').getContext('2d');
    pieChart = new Chart(pieCtx, {
        type: 'doughnut',
        data: {
            labels: ['Accepted', 'Rejected'],
            datasets: [{
                data: [0, 0],
                backgroundColor: [
                    'rgba(76, 175, 80, 0.8)',
                    'rgba(244, 67, 54, 0.8)'
                ],
                borderColor: [
                    'rgba(76, 175, 80, 1)',
                    'rgba(244, 67, 54, 1)'
                ],
                borderWidth: 1
            }]
        },
        options: {
            responsive: true,
            maintainAspectRatio: false,
            plugins: {
                legend: {
                    display: false
                }
            }
        }
    });

    // Инициализация линейного графика
    const lineCtx = document.getElementById('linechart').getContext('2d');
    lineChart = new Chart(lineCtx, {
        type: 'line',
        data: {
            datasets: [{
                label: 'Real-time',
                borderColor: 'rgba(76, 175, 80, 1)',
                backgroundColor: 'rgba(76, 175, 80, 0.2)',
                borderWidth: 2,
                fill: true,
                tension: 0.4,
                data: []
            }, {
                label: 'Average',
                borderColor: 'rgba(33, 150, 243, 1)',
                backgroundColor: 'rgba(33, 150, 243, 0.2)',
                borderWidth: 2,
                fill: true,
                tension: 0.4,
                data: []
            }]
        },
        options: {
            responsive: true,
            maintainAspectRatio: false,
            scales: {
                x: {
                    type: 'time',
                    time: {
                        unit: 'second',
                        displayFormats: {
                            second: 'HH:mm:ss'
                        }
                    },
                    grid: {
                        color: 'rgba(255, 255, 255, 0.1)'
                    },
                    ticks: {
                        color: '#aaa'
                    }
                },
                y: {
                    grid: {
                        color: 'rgba(255, 255, 255, 0.1)'
                    },
                    ticks: {
                        color: '#aaa'
                    },
                    title: {
                        display: true,
                        text: 'Hashrate (TH/s)',
                        color: '#aaa'
                    }
                }
            },
            plugins: {
                legend: {
                    labels: {
                        color: '#e0e0e0',
                        font: {
                            size: 12
                        }
                    }
                }
            }
        }
    });
}

function updateLineChart() {
    if (lineChart) {
        lineChart.data.datasets[0].data = series;
        lineChart.data.datasets[1].data = series1;
        lineChart.update();
    }
}

function loadPieData(accepted, rejected) {
    if (pieChart) {
        pieChart.data.datasets[0].data = [accepted, rejected];
        pieChart.update();
    }
}

function updateHome() {
    var oUpdate;
    oUpdate = new AJAX("get_home.cgi?num=" + Math.random(),
        function (t) {
            try {
                eval(t)
            } catch (e) {
                console.log("updateHome err:" + e.message)
            }
        });
    oUpdate.doGet();
    setTimeout(updateHome, 15000)
}

// Запуск обновления данных при загрузке страницы
document.addEventListener('DOMContentLoaded', function() {
    initCharts();
    updateHome();
});
