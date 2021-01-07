#define BTN 3
#define LED 5

void setup() {
  pinMode(LED,OUTPUT);
  pinMode(BTN,INPUT);
}

void loop() {
  if(digitalRead(BTN)==LOW){
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(LED,LOW);
  }
}
