void setup() {
  pinMode(5,OUTPUT); 
}
int i;
void loop() {
  for(i=0;i<256;i++){
    analogWrite(5,i);
    delay(2);
  }
  for(i=255;i>=0;i--){
    analogWrite(5,i);
    delay(2);
  }
}
