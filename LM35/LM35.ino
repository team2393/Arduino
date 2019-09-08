/*
  LM35 Temperature Sensor
  
  When looking at the LM35:
  Left leg   -> 5V
  Middle leg -> Analog in 1
  Right leg  -> Gnd
  
  TODO: Show Kelvin and Fahrenheit
  in addition to Celsius

  TODO: Create a simple bargraph.
  For a temperature of 0C, print zero '#',
  for a temperature of 40C, print 100 '#',
  so at typical room temperatures you see something like this:
  ###########################################################
  #############################################################
*/

int SENSOR = 1;

void setup()
{
  Serial.begin(9600);
  Serial.println("LM35 sensor on Analog in 1");
}

void loop()
{
  // analogRead() returns 1024 for 5 Volts
  double volt = 5.0 * (analogRead(SENSOR) / 1024.0);
  // Serial.print(volt);
  // Serial.println(" V");

  // Sensor gives 0.010 V per 1 degree Celsius
  double celsius = volt*100.0;
  Serial.print("Temperature: ");
  Serial.print(celsius);
  Serial.println(" C");

  delay(500);
}
