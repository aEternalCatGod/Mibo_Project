//
// Created by elias on 23.03.26.
//

#ifndef ROBO_FIRMWARE_IR_H
#define ROBO_FIRMWARE_IR_H

#include <Arduino.h>

class IR {
	inline static const IR_F = 1
	inline static const IR_R = 2
	inline static const IR_B = 4
	inline static const IR_L = 5

	inline static const
	inline static const
    public:
        static void init();
        static void handle();
};

#endif //ROBO_FIRMWARE_IR_H