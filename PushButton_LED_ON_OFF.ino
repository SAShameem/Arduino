void setup() {
  // Code for LED on/off using PUSH BUTTON
  pinMode(12,INPUT_PULLUP);
  pinMode(13,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int var=digitalRead(12);
Serial.println(var);
digitalWrite(13,var);
}
