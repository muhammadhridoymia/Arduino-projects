int secLeds[] = {2,3,4,5,6,7};   // 6 LEDs
int minLeds[] = {8,9,10,11};     // 4 LEDs

int secCount = 6;
int minCount = 4;

void setup() {

  for(int i = 0; i < secCount; i++){
    pinMode(secLeds[i], OUTPUT);
  }

  for(int i = 0; i < minCount; i++){
    pinMode(minLeds[i], OUTPUT);
  }
}

void loop() {

  for(int minutes = 0; minutes < 16; minutes++){   // 0–15
    for(int seconds = 0; seconds < 60; seconds++){

      // 🔹 Show seconds
      for(int i = 0; i < secCount; i++){
        if(seconds & (1 << i)){
          digitalWrite(secLeds[i], HIGH);
        } else {
          digitalWrite(secLeds[i], LOW);
        }
      }

      // 🔹 Show minutes
      for(int i = 0; i < minCount; i++){
        if(minutes & (1 << i)){
          digitalWrite(minLeds[i], HIGH);
        } else {
          digitalWrite(minLeds[i], LOW);
        }
      }

      delay(1000);
    }
  }
}