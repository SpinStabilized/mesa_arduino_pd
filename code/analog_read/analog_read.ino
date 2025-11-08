/**
 * Update TBD
 */

const unsigned int SENSOR_PIN = A0;      // select the input pin for the potentiometer
const unsigned int PAUSE_DURATION = 100; // in milliseconds

void setup() {
  Serial.begin(9600);
}

void loop() {
  unsigned int sensorValue = 0;
  // read the value from the sensor:
  sensorValue = analogRead(SENSOR_PIN);
  Serial.println(sensorValue);
  delay(PAUSE_DURATION);
}
