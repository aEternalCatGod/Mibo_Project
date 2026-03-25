#ifndef ROBO_FIRMWARE_GPS_H
#define ROBO_FIRMWARE_GPS_H

#include <TinyGPS++.h>
#include <Arduino.h>

class GPS {
private:
    TinyGPSPlus _gps;

public:
    void begin();
    void update();

    bool hasFix();
    uint32_t satellites();
    double getLat();
    double getLng();

    double distanceTo(double destLat, double destLng);
    double courseTo(double destLat, double destLng);
};

extern GPS gps;

#endif
