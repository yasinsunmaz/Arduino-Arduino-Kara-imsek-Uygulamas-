int ledler[]={3,5,6,9,10,11};
void setup() {
  for(int i=0; i<6; i++){
    pinMode(ledler[i], OUTPUT);
  }
}

void loop() {
  for(int i=0; i<6; i++){
    digitalWrite(ledler[i], HIGH);
    delay(25);
    digitalWrite(ledler[i], LOW);
  }
   for(int j=5; j>-1; j--){
    digitalWrite(ledler[j], HIGH);
    delay(25);
    digitalWrite(ledler[j], LOW);
  }
}
