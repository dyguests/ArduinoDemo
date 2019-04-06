#include <Arduino.h>
#include "User_Setup.h"

/*
 * https://www.arduino.cn/thread-76060-1-1.html
 */

void setup() {
    // 初始化串口
    Serial.begin(9600);
}

void loop() {
    // 如果缓冲区中有数据，则读取并输出
    if (Serial.available() > 0) {
        char ch = static_cast<char>(Serial.read());
        Serial.print(ch);
    }
}