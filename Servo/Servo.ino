/* Based on File, Examples, Servo, Sweep
   http://www.arduino.cc/en/Tutorial/Sweep

   Uses servo on pin 9, meaning:
   Black servo wire to GND,
   red servo wire to 5V,
   white (sometimes yellow) wire to pin 9.

   TODO: Does the servo reach 180 degrees?
   Or do we only get to almost 180?

   TODO: Change the stepping.
   Command the servo to 0, 90, 180, 90, 0, 90, 180, ...,
   waiting 2 seconds at each position.
   Do NOT step 0, 1, 2, ..., 89, 90 but directly command
   the servo to go to 90, pause, 180, pause, ...
   to see how fast the servo can reach a setpoint.
 */

// Get servo library, create servo object
#include <Servo.h>
Servo myservo;

void setup()
{
  Serial.begin(9600);
  Serial.println("Servo on pin 9");
  // Attach servo to pin 9
  myservo.attach(9);
}

void loop()
{
  // Go from 0 to (almost) 180 degrees
  for (int angle = 0; angle < 180; angle += 1)
  {
    myservo.write(angle);
    delay(15);
  }
  // Back from 180 to (almost) 0
  for (int angle = 180; angle > 0; angle -= 1)
  {
    myservo.write(angle);
    delay(15);
  }
}
