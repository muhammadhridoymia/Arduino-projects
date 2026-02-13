int ledPins[] = {2, 3, 4}; // LSB to MSB

void setup() {
  for(int i = 0; i < 3; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for(int num = 0; num < 8; num++){ // 0 to 7
    for(int i = 0; i < 3; i++){
      if(num & (1 << i)) {
        digitalWrite(ledPins[i], HIGH);
      } else {
        digitalWrite(ledPins[i], LOW);
      }
    }
    delay(1000); // wait 1 second
  }
}
