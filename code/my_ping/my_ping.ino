/**
 * TBD Clean Up Code
 *
 */

// Define constants for use in the program
const unsigned int TRIGGER_PIN = 7;       // Pin to trigger an echo pulse
const unsigned int ECHO_PIN = 2;          // Pin that echos a pulse with a length proportional to the distance
const unsigned int TRIGGER_DURATION = 5;  // Trigger duration in microseconds
const unsigned int LOOP_PAUSE = 100;      // Time to hold the loop to go again in milliseconds

void setup() {
  pinMode(TRIGGER_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  // initialize serial communication:
  Serial.begin(9600);
}

void loop() {
  // establish variables for duration of the ping, and the distance result
  // in inches and centimeters:
  unsigned long duration = 0;
  static unsigned long inches = 0;

  // The ultrasonic sensor is triggered by a HIGH pulse of 2 or more microseconds.
  digitalWrite(TRIGGER_PIN, HIGH);
  delayMicroseconds(TRIGGER_DURATION);
  digitalWrite(TRIGGER_PIN, LOW);

  // Read back the pulse duration in milliseconds
  duration = pulseIn(ECHO_PIN, HIGH);

  // convert the time into a distance
  inches = microsecondsToInches(duration);

  // Output the distance in inches to the serial port
  Serial.print(inches);
  Serial.print(" in\n");

  // Wait 10
  delay(100);
}

unsigned long microsecondsToInches(unsigned long microseconds) {
  // TBD - Need to find the right datasheet to confirm proper calibration
  return microseconds / 74 / 2;
}
