/*
  Blink multiple LEDs at different rates.
  
  Uses the built-in LED, aka as "pin 13".

  Add a second LED to "pin 12":
  The long leg of an LED goes into the socket labelled 12,
  and the short leg of the LED goes into the nearby 'GND' socket.

  TODO: Change the digitalWrite(..) LOW/HIGH values such
  that when LED1 is 'on', LED2 is 'off' and vice versa.
  
  TODO: Understand the limitation
  In principle, you could add several more LEDs, connected to pins 2 to 11.
  Since you have only one GND socket, you'd need a soldering iron
  to connect all the short LED legs to the same GND socket.
  But this program already shows a limitation with just 2 LEDs:
  You can change the on/off pattern of the LEDs, but how could
  you blink LED1 every 500ms, while LED2 blinks every 1000ms?
  You cannot use 'delay(1000)' for LED2 because you only have one program.
  When it's stuck in 'delay(1000)', nothing else happens, but you need
  to toggle LED1 every 500ms.
  
  Try something like this in loop():
  // Turn LED1 and LED2 on.
  // Wait 500ms.
  // Turn LED1 off.
  // Wait 500ms
  // Turn LED1 on and LED2 off.
  // Wait 500ms.
  // Turn LED1 off.
  // Wait 500ms
  // (end of loop(), so starts over by turning LED1 on and LED2 on.

  See "MultiBlinkTimed" for a different solution.
*/

int LED1 = LED_BUILTIN;
int LED2 = 12;

// Runs once on bootup
void setup()
{
  // Use the 'Serial' class to print something on the serial monitor.
  // It's a good idea to print the program name,
  // because after a while you will wonder:
  // What did I last put onto this Arduino??
  // This way, you can tell by opening the serial monitor
  Serial.begin(9600);
  Serial.println("MultiBlink, LED on pin 12");
  
  // Snitialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

// Runs all the time
void loop()
{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  delay(1000);
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  delay(1000);
}
