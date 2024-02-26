void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  int i;
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(9, LOW);
    delay(500);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    delay(500);
    digitalWrite(11, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
}
