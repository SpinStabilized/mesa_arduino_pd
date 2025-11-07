/**
 * Double Blink Improved - Turns an LED on for one second, then off for one
 * second, repeatedly.
 *
 * Description
 * -----------
 * When one light goes on, the other goes off.
 * 
 * History
 * -------
 * 2025-11-07 Brian McLaughlin
 *
 */

const unsigned int OTHER_PIN = 12;

/**
 * Configure the board to output on both pin 13 (LED_BUILTIN) and pin 12.
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(OTHER_PIN, OUTPUT);
}


/**
 * Blink two lights on and off such that when one light goes on, the other goes
 * off.
 *
 */
void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Set Both Pins High - Only one comes on
  digitalWrite(OTHER_PIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);  // Set Both Pins Low - They switch
  digitalWrite(OTHER_PIN, LOW);
  delay(1000);
}
