// Initiate the pin
int ledPin = 13;

/*
 * This method is run only once and use to initiate things used
 * for rest of the program
 */
void setup() {
  // Set the selected pin as a output pin
  pinMode(ledPin, OUTPUT);
}

/*
 * This function runs as long as Arduino is power on
 */
void loop() {
  digitalWrite(ledPin, HIGH);
  delay(50);
  digitalWrite(ledPin, LOW);
  delay(50);
} 
