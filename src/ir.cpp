//
// Created by elias on 23.03.26.
//

#include "ir.h"
#include "motors.h"


void IR::init() {
    pinMode(IR_F, INPUT);
    pinMode(IR_R, INPUT);
    pinMode(IR_L, INPUT);
    pinMode(IR_B, INPUT);
}

void IR::handle() {
    const int front = digitalReadFast(IR_F);
    const int right = digitalReadFast(IR_R);
    const int left = digitalReadFast(IR_L);
    const int back = digitalReadFast(IR_B);

    if (front||
        right ||
        back ||
        left) {

        Motors::stop();
    }
}