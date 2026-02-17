int red = 8;
int yellow = 9;
int green = 10;
int button = 2;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
}

void loop() {

  // Default state: Green ON
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);

  if(digitalRead(button) == HIGH) {

    // Yellow
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(2000);

    // Red
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);

    // Back to green
    digitalWrite(red, LOW);
  }
}
