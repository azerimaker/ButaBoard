//A sketch to demonstrate the tone() function on the Buta Board

//Specify digital pin on the Arduino that the control pin of the piezo buzzer is attached.
int buzzerPin = 5;

void setup() {

}//close setup

void loop() {

  /*Tone needs 2 arguments, but can take three
    1) Pin#
    2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
    3) Duration - how long the tone plays
  */
  tone(buzzerPin, 2700,100);
  delay(500);
  noTone(buzzerPin);
  delay(500);

}
