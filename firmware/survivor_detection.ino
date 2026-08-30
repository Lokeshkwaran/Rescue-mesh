#include <Arduino.h>

void setup() {
  Serial.begin(115200);

  Serial.println("Rescue-Mesh Survivor Detection Started");
}

void loop() {

  Serial.println("Listening for acoustic and vibration signals...");

  // Microphone detection will be added here
  // Vibration sensor detection will be added here

  delay(5000);
}
