//
// Created by catgod on 20.5.2026
//

#include "compass.h"


Compass Compass::compass;

Compass::Compass() {
    isInitialized = false;
}

bool Compass::begin() {

    if (!qmc.begin()) {
        isInitialized = false;
        return false;
    }

    qmc.setRange(QMC5883P_RANGE_8G);
    qmc.setDataRate(QMC5883P_DATARATE_100HZ);

    isInitialized = true;
    return true;
}

bool Compass::readData(float &x, float &y, float &z) {
    if (!isInitialized) return false;

    sensors_event_t event;
    qmc.getEvent(&event);

    x = event.magnetic.x - offsetX;
    y = event.magnetic.y - offsetY;
    z = event.magnetic.z - offsetZ;

    return true;
}

float Compass::getHeading() {
    float x, y, z;
    if (!readData(x, y, z)) return -1.0;

    float heading = atan2(y, x);
    float headingDegrees = heading * 180.0 / M_PI;

    if (headingDegrees < 0) {
        headingDegrees += 360.0;
    }

    return headingDegrees;
}
