int mtr_1 = 9;
int mtr_2 = 10;
int mtr_3 = 11;
int mtr_4 = 12;

int en_1 = 5;
int en_2 = 6;

int ini_speed = 100;
char state;


void setup() {
  // put your setup code here, to run once:
  pinMode(mtr_1, OUTPUT);
  pinMode(mtr_2, OUTPUT);
  pinMode(mtr_3, OUTPUT);
  pinMode(mtr_4, OUTPUT);

  pinMode(en_1, OUTPUT);
  pinMode(en_2, OUTPUT);
  
  Serial.begin(9600);

}

void loop() {
  if(Serial.available() > 0) {
    state = Serial.read();
    Serial.println(state); 
  }

  if (state == '0'){
      ini_speed = 0;
  }
  else if (state == '1'){
      ini_speed = 25;
  }
  else if (state == '2'){
      ini_speed = 50;
  }
  else if (state == '3'){
      ini_speed = 75;
  }
  else if (state == '4'){
      ini_speed = 100;
  }
  else if (state == '5'){
      ini_speed = 125;
  }
  else if (state == '6'){
      ini_speed = 150;
  }
  else if (state == '7'){
      ini_speed = 175;
  }
  else if (state == '8'){
      ini_speed = 200;
  }
  else if (state == '9'){
      ini_speed = 255;
  }



  if (state == 'F') {
    forward();
  }
  else if (state == 'B') {
    backward();
  }
  else if (state == 'S') {
    Stop();
  }
  else if (state == 'I') {
    f_right();
  }
  else if (state == 'G') {
    f_left();
  }
  else if (state == 'J') {
    b_right();
  }
  else if (state == 'H') {
    b_left();
  }
  else if (state == 'R') {
    right();
  }
  else if (state == 'L') {
    left();
  }
   
  
}

void forward(){
  digitalWrite(mtr_1, LOW);
  digitalWrite(mtr_2, HIGH);
  
  digitalWrite(mtr_3, HIGH);
  digitalWrite(mtr_4, LOW);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);  
}

void backward(){
  digitalWrite(mtr_1, HIGH);
  digitalWrite(mtr_2, LOW);
  
  digitalWrite(mtr_3, LOW);
  digitalWrite(mtr_4, HIGH);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);
}

void right(){
  digitalWrite(mtr_1, HIGH);
  digitalWrite(mtr_2, LOW);
  
  digitalWrite(mtr_3, LOW);
  digitalWrite(mtr_4, HIGH);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);
}

void left(){
  digitalWrite(mtr_1, LOW);
  digitalWrite(mtr_2, HIGH);
  
  digitalWrite(mtr_3, HIGH);
  digitalWrite(mtr_4, LOW);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);

}


void f_left(){
  digitalWrite(mtr_1, LOW);
  digitalWrite(mtr_2, LOW);
  
  digitalWrite(mtr_3, HIGH);
  digitalWrite(mtr_4, LOW);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);
}

void f_right(){
  digitalWrite(mtr_1, HIGH);
  digitalWrite(mtr_2, LOW);
  
  digitalWrite(mtr_3, LOW);
  digitalWrite(mtr_4, LOW);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);
}

void b_right(){
  digitalWrite(mtr_1, LOW);
  digitalWrite(mtr_2, HIGH);
  
  digitalWrite(mtr_3, LOW);
  digitalWrite(mtr_4, LOW);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);
}

void b_left(){
  digitalWrite(mtr_1, LOW);
  digitalWrite(mtr_2, LOW);
  
  digitalWrite(mtr_3, LOW);
  digitalWrite(mtr_4, HIGH);

  analogWrite(en_1, ini_speed);
  analogWrite(en_2, ini_speed);
}


void Stop(){
  digitalWrite(mtr_1, LOW);
  digitalWrite(mtr_2, LOW);
  
  digitalWrite(mtr_3, LOW);
  digitalWrite(mtr_4, LOW);
}
