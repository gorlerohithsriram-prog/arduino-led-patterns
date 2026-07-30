int led = 9; //PWM pin

void setup(){
  pinMode(led,OUTPUT);
}

void loop(){
  for(int brightness=0;brightness<256;brightness++){
    analogWrite(led,brightness);
    delay(100);
  }

  for(int brightness = 255;brightness>=0;brighness--){
    analogWrite(led,brightness);
    delay(100);
  }
}
