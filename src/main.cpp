#include <Arduino.h>
#include <Wire.h>

#include "ir.h"
#include "motors.h"
#include "gps.h"

void setup() {
    Wire.begin(); //SDA 18 SCL 19
    Motors::init();
    GPS::begin();
    IR::init();
}

void loop() {
    IR::handle();
    GPS::update();
}
