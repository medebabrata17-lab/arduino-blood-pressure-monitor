// Blood Pressure Monitoring System
// Arduino-based prototype

const int pressureSensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {

  int sensorValue = analogRead(pressureSensorPin);

  Serial.print("Pressure Sensor Value: ");
  Serial.println(sensorValue);

  delay(100);
}
