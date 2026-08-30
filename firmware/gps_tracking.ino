#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println("Rescue-Mesh GPS Tracking Started");
}

void loop() {
  Serial.println("Getting GPS location...");

  // GPS latitude and longitude will be added here

  delay(5000);
}
