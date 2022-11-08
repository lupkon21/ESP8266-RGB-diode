int r = 5;
int g = 4;
int b = 14;

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop() {
  // red
  for(int i = 0; i <= 1024; i++) {
    analogWrite(r,i);
    delay(5);
  }
  delay(100);

  for(int i = 1024; i >= 0; i--) {
    analogWrite(r,i);
    delay(5);
  }
  delay(100);

  // green
  for(int i = 0; i <= 1024; i++) {
    analogWrite(g,i);
    delay(5);
  }
  delay(100);

  for(int i = 1024; i >= 0; i--) {
    analogWrite(g,i);
    delay(5);
  }
  delay(100);

  // blue
  for(int i = 0; i <= 1024; i++) {
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  for(int i = 1024; i >= 0; i--) {
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  // yellow
  for(int i = 0; i <= 1024; i++) {
    analogWrite(r,i);
    analogWrite(g,i);
    delay(5);
  }
  delay(100);

  for(int i = 1024; i >= 0; i--) {
    analogWrite(r,i);
    analogWrite(g,i);
    delay(5);
  }
  delay(100);

  // magenta
  for(int i = 0; i <= 1024; i++) {
    analogWrite(r,i);
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  for(int i = 1024; i >= 0; i--) {
    analogWrite(r,i);
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  // cyan
    for(int i = 0; i <= 1024; i++) {
    analogWrite(g,i);
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  for(int i = 1024; i >= 0; i--) {
    analogWrite(g,i);
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  // white
    for(int i = 0; i <= 1024; i++) {
    analogWrite(r,i);
    analogWrite(g,i);
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  for(int i = 1024; i >= 0; i--) {
    analogWrite(r,i);
    analogWrite(g,i);
    analogWrite(b,i);
    delay(5);
  }
  delay(100);

  // black - no light
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
  delay(5320);
  
}
