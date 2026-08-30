#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println("Rescue-Mesh Sensor Node Started");
}

void loop() {
  Serial.println("Monitoring for survivor signals...");

  delay(5000);
}
