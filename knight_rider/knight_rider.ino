//Initialize pins Array
int pins[] ={9,10,11,12,13};

void setup() {
    //Set all pins to OUTPUT
    for (int i=9;i<14;i++) {
    pinMode(pins[i], OUTPUT);
    }
 }

void loop() {
  // loop to run led's assending 
  for (int i=9;i<=13;i++) {
   digitalWrite(pins[i], HIGH);
   delay(50);
   digitalWrite(pins[i], LOW);
   delay(50);
  }
  // loop to run led's dessending 
for (int i=13;i>=9;i--) {
   digitalWrite(pins[i], HIGH);
   delay(50);
   digitalWrite(pins[i], LOW);
   delay(50);
  }

}
