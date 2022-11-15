/*
Blink
Programmer: Ranen Allishaw
Date: NOV/14/2022
Program: Blink
Verion: 1.2
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 12 and 11 as an output.
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  delay(500);              // wait for a second
  digitalWrite(12, LOW);    // turn the LED on (HIGH is the voltage level)
  digitalWrite(11, HIGH);   // turn the LED off by making the voltage LOW
  delay(500);              // wait for a second
}
