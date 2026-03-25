#include "gps.h"

GPS gps;

void GPS::begin() {
    Serial2.begin(9600, SERIAL_8N1, 18, 17);
}

void GPS::update() {
    while (Serial2.available() > 0) {
        _gps.encode(Serial2.read());
    }
}

bool GPS::hasFix() {
    return _gps.location.isValid() && _gps.satellites.value() > 3;
}

uint32_t GPS::satellites() {
    return _gps.satellites.value();
}

double GPS::getLat() {
    return _gps.location.lat();
}

double GPS::getLng() {
    return _gps.location.lng();
}

double GPS::distanceTo(double destLat, double destLng) {
    return TinyGPSPlus::distanceBetween(_gps.location.lat(), _gps.location.lng(), destLat, destLng);
}

double GPS::courseTo(double destLat, double destLng) {
    return TinyGPSPlus::courseTo(_gps.location.lat(), _gps.location.lng(), destLat, destLng);
}
