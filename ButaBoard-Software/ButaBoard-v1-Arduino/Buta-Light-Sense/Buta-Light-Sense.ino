#define LIGHT_SENSE A5

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}


void loop() {

  int sensorValue = analogRead(LIGHT_SENSE);
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}
