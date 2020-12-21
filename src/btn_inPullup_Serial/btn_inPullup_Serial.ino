int BTN=3;
int LED=5;
void setup() {
  Serial.begin(9600);
  pinMode(LED,OUTPUT);
  pinMode(BTN,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(BTN)==LOW){
    Serial.print(BTN);
    Serial.println(" pin is Pressed!");
    digitalWrite(LED,HIGH);
    delay(1000);
    digitalWrite(LED,LOW);
  }
}
