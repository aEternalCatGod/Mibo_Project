//
// Created by elias on 23.03.26.
//

#ifndef ROBO_FIRMWARE_IR_H
#define ROBO_FIRMWARE_IR_H

#include <Arduino.h>

class IR {
	inline static const uint8_t PIN_IR_F = 1;
	inline static const uint8_t PIN_IR_R = 2;
	inline static const uint8_t PIN_IR_B = 4;
	inline static const uint8_t PIN_IR_L = 5;

    public:
        static void init();
        static bool handle();
};

#endif //ROBO_FIRMWARE_IR_H