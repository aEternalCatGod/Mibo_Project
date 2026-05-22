//
// Created by catgod on 20.5.2026
//

#pragma once
#include <Arduino.h>
#include <Adafruit_QMC5883P.h>

class Compass {
public:
    Adafruit_QMC5883P qmc;
    bool isInitialized;

    static Compass compass;
    float offsetX = 0.0;
    float offsetY = 0.0;
    float offsetZ = 0.0;

    Compass();
    bool begin();
    bool readData(float &x, float &y, float &z);
    float getHeading();
};
