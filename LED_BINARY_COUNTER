int led[] = {8,9,10,11,12};
int n=5;

void setup(){
  for(int i=0;i<5;i++){
    pinMode(led[i],OUTPUT);
  }
}

void loop(){
  for(int num=0;num<31;num++){
    for(int bit=0;bit<5;bit++){
      int bitvalue = (num >> bit) & 1;
      digitalWrite(led[bit],bitvalue);
    }
  }
  delay(1000);
}
