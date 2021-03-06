// Christmas setup (Red & Green)

#define LEDstripGreen 9
#define LEDstripRed 10
#define LEDstripBlue 11
long randNum;

void setup() {
  pinMode(7,INPUT);
  pinMode(LEDstripGreen, OUTPUT);
  pinMode(LEDstripRed, OUTPUT);
  pinMode(LEDstripBlue, OUTPUT);
}

void loop() {
  boolean soundstate = digitalRead(7);
  randNum = random(200);
  if (soundstate == HIGH) {
    if(randNum <= 100){
      analogWrite(LEDstripRed, 0);
      delay(150);
    }
    else{
      analogWrite(LEDstripGreen, 0);
      delay(150);
    }
  }
    
   analogWrite(LEDstripGreen, 255);
   analogWrite(LEDstripRed, 255);
   analogWrite(LEDstripBlue, 255);
}