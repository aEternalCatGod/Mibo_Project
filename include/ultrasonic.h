//
// Created by elias on 18.05.26.
//

#ifndef ROBO_FIRMWARE_ULTRASONIC_H
#define ROBO_FIRMWARE_ULTRASONIC_H
#include <cstdint>

class Ultrasonic {
    inline static const uint8_t PIN_US_TRIG_FRONT = 1;
    inline static const uint8_t PIN_US_ECHO_FRONT = 2;
public:
    static void init();
    static float getDistance(uint8_t trigPin, uint8_t echoPin);
};


#endif //ROBO_FIRMWARE_ULTRASONIC_H