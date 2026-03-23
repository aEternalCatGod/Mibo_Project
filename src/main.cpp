#include <Arduino.h>

#include "ir.h"
#include "motors.h"

void setup() {
    motors.init();
}

void loop() {
    ir.handle_ir();
}
