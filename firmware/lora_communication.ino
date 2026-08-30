#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println("Rescue-Mesh LoRa Communication Module");
  Serial.println("Initializing LoRa...");
}

void loop() {
  Serial.println("Waiting to send emergency data...");
  delay(5000);
}
