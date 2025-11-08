/**
 * Button
 *
 * Turns on and off a light emitting diode(LED) connected to digital pin 13,
 * when pressing a pushbutton attached to pin 2.
 *
 * The circuit:
 * - LED attached from pin 13 to ground through 220 ohm resistor
 * - pushbutton attached to pin 2 from +5V
 * - 10K resistor attached to pin 2 from ground
 *
 * - Note: on most Arduinos there is already an LED on the board
 *   attached to pin 13.
 *
 *
 *
 *
 * 
 */

// constants won't change. They're used here to set pin numbers:
const unsigned int BUTTON_PIN = 2;   // the number of the pushbutton pin
const unsigned int LED_PIN    = 13;  // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  pinMode(LED_PIN, OUTPUT); // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT); // initialize the pushbutton pin as an input:
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
