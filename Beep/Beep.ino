const int LED7 = 8;

void setup() {
  pinMode(LED7, OUTPUT);

}

void loop() {
  for (int i = 0; i < 50; i++) {
    digitalWrite(LED7, HIGH);
    delay(3);
    digitalWrite(LED7, LOW);
    delay(3);
  }
  
  delay(1000);
}
