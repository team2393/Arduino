/* Joghurt maker temperature control
 * 
 * LM35: Pin 1 - 5V
 *       Pin 2 - Analog input A0
 *       Pin 3 - GND
 * 
 * Temperature range is -55 to 150 C
 * 
 * Solid state relay on GND and DIO pin 13
 * (which is also used by built in LED)
 */

#define LM35 0
#define RELAY 13

void setup()
{
  Serial.begin(9600);
  Serial.println("Yoghurt Maker");

  pinMode(RELAY, OUTPUT);
  digitalWrite(RELAY, LOW);
}

// Desired temperature
static double setpoint = 30.0;

// Allowance above/below setpoint
// to keep relay from chattering near setpoint
static double hysteresis = 3.0;

static double smooth_celsius = 25.0;
static bool on = false;

void loop()
{
  double volt = analogRead(LM35) * 5.0/1024.0;
  double celsius = volt * 100.0;
  smooth_celsius = smooth_celsius * 0.9  + celsius * 0.1;
  Serial.print(smooth_celsius);
  Serial.print("\t");
  Serial.println(on ? 1 : 0);

  if (on  &&  smooth_celsius > setpoint + hysteresis)
  {
    on = false;
    digitalWrite(RELAY, LOW);
  }
  else if (!on && smooth_celsius < setpoint - hysteresis)
  {
    on = true;
    digitalWrite(RELAY, HIGH);
  }  
}
