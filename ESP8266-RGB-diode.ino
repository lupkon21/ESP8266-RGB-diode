int r = 5;
int g = 4;
int b = 14;

int colors1[3][1] = {{r},{g},{b}};        // red, green, blue
int colors2[3][2] = {{r,g},{r,b},{g,b}};  // yellow, magenta, cyan
int colors3[3] = {r,g,b};

void setup() {
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop() {
  // for colors made of one basic color
  for(int i = 0; i < 3; i++) {
      diodeCycle(colors1[i],1);
  }

  // for colors made of two basic colors
  for(int i = 0; i < 3; i++) {
      diodeCycle(colors2[i],2);
  }

  // for colors made of three basic colors - white and black (no light)
  diodeCycle(colors3,3);

  for(int i = 0; i < 3; i++) {
    digitalWrite(colors3[i],LOW);
  }
  delay(10440);
}


/**
 * Custom functions
 */

// function for one smooth diode cycle
void diodeCycle(int color[],int len) {
  turnOnDiode(color,len);
  delay(100);
  turnOffDiode(color,len);
  delay(100);
}


// function for smooth turning the diode on
void turnOnDiode(int color[],int len) {
  for(int i = 0; i <= 1023; i++) {
    analogWriteCustom(color,i,len);
    delay(5);
  }
}

// function for smooth turning the diode off
void turnOffDiode(int color[],int len) {
  for(int i = 1023; i >= 0; i--) {
    analogWriteCustom(color,i,len);
    delay(5);
  }
}

// wrapper over the build-in analogWrite() function
void analogWriteCustom(int color[],int value,int len) {
  for(int i = 0; i < len; i++) {
    analogWrite(color[i],value);
  }
}
