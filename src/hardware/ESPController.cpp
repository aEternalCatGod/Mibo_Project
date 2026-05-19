//
// Created by elias on 19.05.26.
//

#include "ESPController.h"
#include <ArduinoJson.h>

void ESPController::begin() {
    Serial.begin(115200);
    while (!Serial) {
        continue;
    }
}

void ESPController::update() {
    if (Serial.available() > 0) {
        StaticJsonDocument<256> doc;

        // Read JSON
        DeserializationError error = deserializeJson(doc, Serial);

        // Clear bufferon error
        if (error) {
            while (Serial.available() > 0) {
                Serial.read();
            }
            return;
        }


        if (doc.containsKey("coords")) {
            JsonObject coords = doc["coords"];

            float lat = coords["lat"] | 0.0f;
            float lon = coords["long"] | 0.0f;

            // Call Logic
            //handleCoordinates(lat, lon);
        }
    }
}