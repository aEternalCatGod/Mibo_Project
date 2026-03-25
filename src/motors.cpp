//
// Created by elias on 23.03.26.
//

#include "motors.h"

#include <Arduino.h>
#include <esp32-hal-gpio.h>

int motorSpeed = SPEED_DEFAULT;
int innerSpeed = motorSpeed * 0.3;

Motors motors;

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

    }

    void Motors::drive_right() {

    }


    void Motors::drive_backwards() {
            digitalWrite(MOTOR_FL_1, LOW); analogWrite(MOTOR_FL_2, motorSpeed);
            digitalWrite(MOTOR_FR_1, LOW); analogWrite(MOTOR_FR_2, motorSpeed);
            digitalWrite(MOTOR_BL_1, LOW); analogWrite(MOTOR_BL_2, motorSpeed);
            digitalWrite(MOTOR_BR_1, LOW); analogWrite(MOTOR_BR_2, motorSpeed);
    }

    void Motors::turn_left() {

    }

    void Motors::drive_left() {

    }


    void Motors::stop() {
        digitalWrite(MOTOR_FL_1, LOW); digitalWrite(MOTOR_FL_2, LOW);
        digitalWrite(MOTOR_FR_1, LOW); digitalWrite(MOTOR_FR_2, LOW);
        digitalWrite(MOTOR_BL_1, LOW); digitalWrite(MOTOR_BL_2, LOW);
        digitalWrite(MOTOR_BR_1, LOW); digitalWrite(MOTOR_BR_2, LOW);
    }

    void Motors::set_motor_speed(int speed) {
        motorSpeed = constrain(speed, SPEED_MIN, SPEED_MAX);
    }
