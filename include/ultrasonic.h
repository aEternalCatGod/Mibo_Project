//
// Created by elias on 18.05.26.
//

#ifndef ROBO_FIRMWARE_ULTRASONIC_H
#define ROBO_FIRMWARE_ULTRASONIC_H
#include <cstdint>


#define US_TRIG_FRONT 1
#define US_E_F 2
#define US_B 3



class Ultrasonic {
public:
    static void init();
    static float getDistance(uint8_t trigPin, uint8_t echoPin);
};


#endif //ROBO_FIRMWARE_ULTRASONIC_H