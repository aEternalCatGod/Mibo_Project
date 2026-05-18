//
// Created by elias on 23.03.26.
//

#ifndef ROBO_FIRMWARE_MOTORS_H
#define ROBO_FIRMWARE_MOTORS_H

#include <cstdint>

// Pin definitions
#define MOTOR_FL_1 21
#define MOTOR_FL_2 47
#define MOTOR_FR_1 13
#define MOTOR_FR_2 14
#define MOTOR_BL_1 15
#define MOTOR_BL_2 16
#define MOTOR_BR_1 11
#define MOTOR_BR_2 12

// Speed constraints
#define SPEED_MIN 0
#define SPEED_MAX 255
#define SPEED_DEFAULT 150

class Motors {
private:
    static int motorSpeed;
    static int innerSpeed;

public:
    static void init();
    static void drive_forward();
    static void turn_right();
    static void drive_right();
    static void drive_backwards();
    static void turn_left();
    static void drive_left();
    static void stop();
    static void set_motor_speed(int speed);
};
#endif //ROBO_FIRMWARE_MOTORS_H
