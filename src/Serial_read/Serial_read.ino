#define LED 5

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    int c = Serial.read();
    if (c == 'H') {
      digitalWrite(LED, HIGH);
    } else if (c == 'L') {
      digitalWrite(LED, LOW);
    }
  }
}
