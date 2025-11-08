/*
 * SOS
 * 
 * Flash the on-board LED connected to pin 13 in a morse code SOS pattern. That
 * is, dot dot dot dash dash dash dot dot dot. This is a minor evolution from
 * the basic, classic, blink program.
 *
 * Author(s):
 * Brian McLaughlin (bjmclaughlin@gmail.com)
 * 
 */

const unsigned int DOT = 250;          // Length of time in milliseconds of a dot
const unsigned int DASH = 500;         // Length of time in milliseconds of a dash
const unsigned int STOP = 0;           // Special symbol to indicate the end of a message
const unsigned int WORD_BREAK = 2000;  // Length of time between words to wait, in milliseconds
const unsigned int SYMBOL_BREAK = DOT; // Set the break between symbols to be
                                       // the length of time of the dash

// The morse code pattern we want to blink as an array of dot and dash variables
const unsigned int message[] = {DOT, DOT, DOT, DASH, DASH, DASH, DOT, DOT, DOT, STOP};


/**
 * Initialize the Arduino configuration.
 * 
 * The setup() function is a core part of every Arduino program. It should
 * handle configuration of the Arduino board for the program's needs. This
 * function executes once at power-on, before starting the loop() function.
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // initialize digital pin LED_BUILTIN as an
                                // output. The on-board pin 13, which is also
                                // connected to an LED on the board, is mapped
                                // to the global variable LED_BUILTIN by the
                                // underlying Arduino software.
}

/**
 * Run the loop forever. This is normal in software running on this kind of
 * hardware. The hardware is meant to do one thing, do it well, and do it
 * forever as long as it has power.
 */
void loop() {
  static unsigned int index = 0;    // A variable to keep track of where we are in the message.

  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(message[index]);            // Stay on for the time indicated by on_time[index], in milliseconds
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  
  index++; // This is the equivalent of index = index + 1, increment it so it
           // points at the next symbol in the message

  if (message[index] == STOP) { // IF the next symbol is the stop symbol:
    delay(WORD_BREAK);          //  We are at the end of a word, pause for the duration of word_break before continuing
    index = 0;                  //  Reset the index to the start of the message.
  } else {                      // OTHERWISE
    delay(SYMBOL_BREAK);        //   Delay for the amount of time of a normal symbol break                      
  }
  
} // One iteration of the loop is done, go back to the top of loop()
