/*
 * Code to measure the potetntiometer resistance
 * 
 Circuit:
 * Potentiometer connected to A0
 * 
 */

 int potPin = A0; //potentiometer

void setup() {
  
  Serial.begin(9600);

}

void loop() {

  int analogVal;

  analogVal = analogRead(potPin);
  Serial.println(analogVal);

  delay(1000);

}
