//
// Created by elias on 23.03.26.
//

#include "headers/motors.h"
#include <Arduino.h>


int Motors::motorSpeed = SPEED_DEFAULT;
int Motors::innerSpeed = SPEED_DEFAULT * 0.3;

void Motors::init() {
    pinMode(MOTOR_FL_1, OUTPUT);
    pinMode(MOTOR_FL_2, OUTPUT);
    pinMode(MOTOR_FR_1, OUTPUT);
    pinMode(MOTOR_FR_2, OUTPUT);
    pinMode(MOTOR_BL_1, OUTPUT);
    pinMode(MOTOR_BL_2, OUTPUT);
    pinMode(MOTOR_BR_1, OUTPUT);
    pinMode(MOTOR_BR_2, OUTPUT);
}

void Motors::drive_forward() {
    analogWrite(MOTOR_FL_1, motorSpeed); digitalWrite(MOTOR_FL_2, LOW);
    analogWrite(MOTOR_FR_1, motorSpeed); digitalWrite(MOTOR_FR_2, LOW);
    analogWrite(MOTOR_BL_1, motorSpeed); digitalWrite(MOTOR_BL_2, LOW);
    analogWrite(MOTOR_BR_1, motorSpeed); digitalWrite(MOTOR_BR_2, LOW);
}

void Motors::turn_right() {
        analogWrite(MOTOR_FL_1, motorSpeed); digitalWrite(MOTOR_FL_2, LOW);
        digitalWrite(MOTOR_FR_1, LOW); analogWrite(MOTOR_FR_2, motorSpeed);
        analogWrite(MOTOR_BL_1, motorSpeed); digitalWrite(MOTOR_BL_2, LOW);
        digitalWrite(MOTOR_BR_1, LOW); analogWrite(MOTOR_BR_2, motorSpeed);
}

void Motors::drive_right() {
        analogWrite(MOTOR_FL_1, motorSpeed); digitalWrite(MOTOR_FL_2, LOW);
        analogWrite(MOTOR_FR_1, innerSpeed); digitalWrite(MOTOR_FR_2, LOW);
        analogWrite(MOTOR_BL_1, motorSpeed); digitalWrite(MOTOR_BL_2, LOW);
        analogWrite(MOTOR_BR_1, innerSpeed); digitalWrite(MOTOR_BR_2, LOW);
}

void Motors::drive_backwards() {
        digitalWrite(MOTOR_FL_1, LOW); analogWrite(MOTOR_FL_2, motorSpeed);
        digitalWrite(MOTOR_FR_1, LOW); analogWrite(MOTOR_FR_2, motorSpeed);
        digitalWrite(MOTOR_BL_1, LOW); analogWrite(MOTOR_BL_2, motorSpeed);
        digitalWrite(MOTOR_BR_1, LOW); analogWrite(MOTOR_BR_2, motorSpeed);
}

void Motors::turn_left() {
    digitalWrite(MOTOR_FL_1, LOW); analogWrite(MOTOR_FL_2, motorSpeed);
    analogWrite(MOTOR_FR_1, motorSpeed); digitalWrite(MOTOR_FR_2, LOW);
    analogWrite(MOTOR_BL_1, motorSpeed); digitalWrite(MOTOR_BL_2, LOW);
    analogWrite(MOTOR_BR_1, motorSpeed); digitalWrite(MOTOR_BR_2, LOW);
}

void Motors::drive_left() {
        analogWrite(MOTOR_FL_1, innerSpeed); digitalWrite(MOTOR_FL_2, LOW);
        analogWrite(MOTOR_FR_1, motorSpeed); digitalWrite(MOTOR_FR_2, LOW);
        analogWrite(MOTOR_BL_1, innerSpeed); digitalWrite(MOTOR_BL_2, LOW);
        analogWrite(MOTOR_BR_1, motorSpeed); digitalWrite(MOTOR_BR_2, LOW);
}

void Motors::stop() {
    digitalWrite(MOTOR_FL_1, LOW); digitalWrite(MOTOR_FL_2, LOW);
    digitalWrite(MOTOR_FR_1, LOW); digitalWrite(MOTOR_FR_2, LOW);
    digitalWrite(MOTOR_BL_1, LOW); digitalWrite(MOTOR_BL_2, LOW);
    digitalWrite(MOTOR_BR_1, LOW); digitalWrite(MOTOR_BR_2, LOW);
}

void Motors::set_motor_speed(int speed) {
        motorSpeed = constrain(speed, SPEED_MIN, SPEED_MAX);
        innerSpeed = motorSpeed * 0.3;
    }