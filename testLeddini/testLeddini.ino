#define RED 3
#define GREEN 5
#define BLUE 6

void setup() {
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {
    for (int j = 0; j < 256; j++) {
      for (int k = 0; k < 256; k++) {
        analogWrite(RED, i);
        analogWrite(GREEN, j);
        analogWrite(BLUE, k);
        delay(50);
      }
    }
  }
}
