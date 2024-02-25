void setup() {
  // Code for analog read on GAS SENSOR
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int val = analogRead(A0);
Serial.println(val);
delay(1000);
}
