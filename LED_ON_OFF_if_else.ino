void setup() {
  // If we press the PUSH Button then LED will be ON
  pinMode(2,INPUT_PULLUP);
  pinMode(6.OUTPUT);
}

void loop() {
  int var=digitalRead(2);
  if(var==0){
    digitalWrite(6,HIGH);
  }
  else{
    digitalWrite(6,LOW);
  }
}
