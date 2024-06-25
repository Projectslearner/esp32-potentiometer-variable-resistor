/*
   Project name: ESP32 Potentiometer Variable Resistor
   Modified Date: 24-06-2024
   Code by: Projectslearner
   Website: https://projectslearner.com/learn/esp32-potentiometer-variable-resistor
*/

const int potPin = 34; // Analog pin connected to the potentiometer

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the potentiometer
  int potValue = analogRead(potPin);

  // Print the analog value to the Serial Monitor
  Serial.print("Potentiometer Value: ");
  Serial.println(potValue);

  delay(500); // Add a small delay before the next reading
}
