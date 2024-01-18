#include <Arduino.h>
#include "some_dep.h"

void setup() {
    Serial.begin(9600);
}

void loop() {
    Serial.println("FANCY FIRMWARE");
    fancy_func();
    delay(1000);
}