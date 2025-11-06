/**
 * Blink Improved - Turns an LED on for one second, then off for one second, repeatedly.
 *
 * Description
 * -----------
 * Most Arduinos, including the Arduino UNO provided for MESA have an on-board
 * LED you can control. On the UNO it is attached to digital pin 13. The
 * constant, global, variable LED_BUILTIN is set to the integer 13.
 * 
 * History
 * -------
 * 2025-10-30 Brian McLaughlin
 * 2014-05-08 Scott Fitzgerald
 * 2016-09-02 Arturo Guadalupi
 * 2016-09-08 Colby Newman
 *
 * Notes
 * -----
 * The original example code is in the public domain.
 * https://docs.arduino.cc/built-in-examples/basics/Blink/
 */

/**
 * The setup() function is run exactly once at power-up or after a reset. It is
 * used to configure the board before the main part of the program begins
 * execution.
 *
 * In this example we utilize the built-in Arduino function pinMode() to
 * set the LED_BUILTIN pin, defined as pin 13 on the Arduino UNO, to output
 * mode since we are using the pin to output a voltage.
 *
 */
void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // initialize digital pin LED_BUILTIN as an
                                // output. The on-board pin 13, which is also
                                // connected to an LED on the board, is mapped
                                // to the global variable LED_BUILTIN by the
                                // underlying Arduino software.
}


/**
 * The loop() function is called repeatedly forever except for the following
 * cases:
 *   - Power is removed from the board. No power, no activity. When power is
 *     is restored, the setup() function will run first and then loop() will
 *     start running again.
 *   - The reset button is pushed. If the reset button is pushed it is the
 *     equivalent of removing power and plugging it in again quickly.
 *   - Certain programming errors. For example, if I created another set of logic
 *     within loop() itself that never exits, the board would be stuck in that
 *     section of code forever and never reach the end of loop() to start
 *     over again.
 *   - The board can seem to be stuck if you use a wait function for too
 *     long. The delay() function accepts as input an integer number of
 *     milliseconds. If I were to call delay() with a value of
 *     3600000 milliseconds, or 3600 seconds, or 1 hour, you would end up
 *     sitting there for a long time while the board does nothing and it
 *     could feel like it stopped. But, in reality, it is just waiting.
 *   - Other advanced coding errors that we won't worry about for now.
 *
 */
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage
                                    // level, relative to ground, 0 Volts). It
                                    // is best to think of HIGH and LOW on
                                    // these pins as logic level HIGH and LOW
                                    // where HIGH represents ON or TRUE and
                                    // LOW represents OFF or FALSE.
  delay(1000);                      // wait for 1 second (1000 milliseconds)
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off (logic level LOW)
  delay(1000);                      // wait for a second
}
