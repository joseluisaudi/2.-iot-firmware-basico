// #include <Arduino.h>

void setup() {
  // Initialize serial communication at 115200 baud
  Serial.begin(115200);
  delay(1000); // Give the serial monitor time to connect

  Serial.println("=====================================");
  Serial.println("Hello World from ESP32!");
  Serial.println("=====================================");
}

void loop() {
  // Print message every 2 seconds
  Serial.println("Hello World loop running...");
  delay(2000);
}
