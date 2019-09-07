/*
  Blink multiple LEDs at different rates based on timing
  
  Uses the built-in LED, aka as "pin 13".

  Add a second LED to "pin 12".

  TODO: Understand what's happening in the loop()!

  TODO: Change timing
  Make LED1 to blink every 2 seconds,
  and LED2 blink every 50ms. 
*/

int LED1 = LED_BUILTIN;
int LED2 = 12;

// Runs once on bootup
void setup()
{
  // Show program name
  Serial.begin(9600);
  Serial.println("MultiBlinkTimed, LED on pin 12");
  
  // Snitialize digital pin LED_BUILTIN as an output.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

// Runs all the time
void loop()
{
  // How many milliseconds have passed since we started the program?
  unsigned long ms = millis();

  if ( (ms / 500) % 2 == 1)
    digitalWrite(LED1, HIGH);
  else
    digitalWrite(LED1, LOW);

  // ms: Millisecs since the program started. Eventually some large number.
  // ms/1000: Seconds since the program started.
  // Note it's 'int' math, only whole numbers.
  // ms/1000 has values 1, 2, 3, ... after 1, 2, 3, .. seconds runtime.
  // ... % 2: Divides those seconds by 2, and gives us the rest.
  // So for even seconds, that's 0, and for odd seconds, that's 1.
  // if (.... == 1) is thus true for each odd second.     
  if ( (ms / 1000) % 2 == 1)
    digitalWrite(LED2, HIGH);
  else
    digitalWrite(LED2, LOW);
}
