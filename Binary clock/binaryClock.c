int leds[] = {2,3,4,5,6,7};
int totalLeds = 6;

void setup() {
  for(int i = 0; i < totalLeds; i++){
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {

  for(int seconds = 0; seconds < 60; seconds++){

    for(int i = 0; i < totalLeds; i++){

      if(seconds & (1 << i)){
        digitalWrite(leds[i], HIGH);
      } else {
        digitalWrite(leds[i], LOW);
      }

    }

    delay(1000); // 1 second
  }

}