/*
  This is the same as File, Examples, 01.Basic, Blink.
  Turns the built-in LED on and off.

  TODO 1: Connect your own LED to "pin 13"
  The long leg of an LED goes into the socket labelled 13,
  and the short leg of the LED goes into the 'GND' socket next to it.

  TODO 2: Change the timing
  Update the delay(...) times to get different blink patterns

  'on' delay    'off' delay    Description
  ------------------------------------------------------------
      1000         1000        Original setting, 1 second on/off
       100          100        Faster on/off
        50         1000        Short 'blip' with 1 second pause
         1           10        What's happening?

  Next, see "MultiBlink" example for controlling 2 LEDs
*/

// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  // turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for 1000 milliseconds, i.e. 1 second
  delay(1000);
  // turn LED off
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
