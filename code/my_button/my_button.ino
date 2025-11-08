/**
 * To Be Revised
 */

const unsigned int BUTTON_PIN = 2;   // the number of the pushbutton pin
const unsigned int LED_PIN    = 13;  // the number of the LED pin

void setup() {
  pinMode(LED_PIN, OUTPUT); // initialize the LED pin as an output:
  pinMode(BUTTON_PIN, INPUT); // initialize the pushbutton pin as an input:
}

void loop() {
  unsigned int buttonState = 0;
  // read the state of the pushbutton value:
  buttonState = digitalRead(BUTTON_PIN);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(LED_PIN, HIGH);
  } else {
    // turn LED off:
    digitalWrite(LED_PIN, LOW);
  }
}
