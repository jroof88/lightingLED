// 7 different possible color outputs depending on the random number
//
// 1. Red
// 2. Green
// 3. Blue
// 4. Red + Green = Yellow
// 5. Red + Blue = Purple
// 6. Green + Blue = BlueGreen
// 7. Red + Green + Blue

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
  randNum = random(700);
  if (soundstate == HIGH) {
    if(randNum <= 100){
      analogWrite(LEDstripRed, 0);
      delay(150);
    }
    else if((randNum >= 100) && (randNum < 200)){
      analogWrite(LEDstripGreen, 0);
      delay(150);
    }
    else if((randNum >= 200) && (randNum < 300)){
      analogWrite(LEDstripBlue, 0);
      delay(150);
    }
    else if((randNum >= 300) && (randNum < 400)){
      analogWrite(LEDstripRed, 0);
      analogWrite(LEDstripGreen, 0);      
      delay(150);
    }
    else if((randNum >= 400) && (randNum < 500)){
      analogWrite(LEDstripRed, 0);
      analogWrite(LEDstripBlue, 0);
      delay(150);
    }
    else if((randNum >= 500) && (randNum < 600)){
      analogWrite(LEDstripRed, 0);
      analogWrite(LEDstripBlue, 0);
      delay(150);
    }
    else{
      analogWrite(LEDstripRed, 0);
      analogWrite(LEDstripGreen, 0);      
      analogWrite(LEDstripBlue, 0);
      delay(150);  
    }
  }
    
   analogWrite(LEDstripGreen, 255);
   analogWrite(LEDstripRed, 255);
   analogWrite(LEDstripBlue, 255);
}