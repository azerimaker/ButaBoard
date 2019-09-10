#define SERIESRESISTOR 10000    
 
// What pin to connect the sensor to
#define THERMISTORPIN A0 
 
void setup(void) {
  Serial.begin(9600);
}
 
void loop(void) {
  float reading;
 
  reading = analogRead(THERMISTORPIN);
 
  Serial.print("Analog reading "); 
  Serial.println(reading);
 
  // convert the value to resistance
  reading = (1023 - reading)/reading;   // (1023-ADC)/ADC
  reading = reading * SERIESRESISTOR;   // *R2

  Serial.print("Thermistor resistance (Ohms): "); 
  Serial.println(reading);
 
  delay(1000);
}
