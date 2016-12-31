// Declare variables to hold  pin numbers
int led1 = 13;
int led2 = 12;
int led3 = 11;

void setup() {
  // Set pins as output pin because we used to lite the LEDS
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

/* What we are going to try in this example is
 * lite one LED at a time
 */
void loop() {
  forwardLit(400, 100);
  backwardLit(400, 100);
}

/*
 *  This function will LED in one direction
 */
void forwardLit(int timeOn, int timeOff) {
  onLED(led1, timeOn, timeOff);
  onLED(led2, timeOn, timeOff);
  onLED(led3, timeOn, timeOff);
}

void backwardLit(int timeOn, int timeOff) {
  onLED(led3, timeOn, timeOff);
  onLED(led2, timeOn, timeOff);
  onLED(led1, timeOn, timeOff);
}
/*
 * This method will light given LED for given amount of time
 */
void onLED(int LED, int timeOn, int timeOff) {
  digitalWrite(LED, HIGH);
  delay(timeOn);
  digitalWrite(LED, LOW);
  delay(timeOff);
}

