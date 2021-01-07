#define RED 5
#define BLUE 13

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

unsigned long tR=millis(),tB=millis();
int INTERVAL_R=500,INTERVAL_B=3000;
int outR=LOW,outB=LOW;
void loop() {
  if(millis()-tR>=INTERVAL_R){
    tR=millis();
    outR=!outR;
    digitalWrite(RED,outR);
  }
  if(millis()-tB>=INTERVAL_B){
    tB=millis();
    outB=!outB;
    digitalWrite(BLUE,outB);
  }
}
