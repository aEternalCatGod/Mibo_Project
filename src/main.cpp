#include <Arduino.h>

#include "ir.h"
#include "motors.h"
#include "gps.h"

void setup() {
    motors.init();
    gps.begin();
}

void loop() {
    ir.handle_ir();
    gps.update();
}
