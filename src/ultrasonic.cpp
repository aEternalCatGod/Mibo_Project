//
// Created by elias on 18.05.26.
//

#include "ultrasonic.h"

#include <Arduino.h>

void Ultrasonic::init() {
    pinMode()
}

float Ultrasonic::getDistance(uint8_t trigPin, uint8_t echoPin) {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    long duration = pulseInLong(echoPin, HIGH, 30000); // 30ms timeout
    return duration * 0.0343 / 2.0;
}

