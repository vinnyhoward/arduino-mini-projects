const int LED0 = 13; 
const int LED1 = 12;

void setup() {
  pinMode(LED0, OUTPUT);

}

void loop() {
  for (int i = 0; i < 50; i++) {
    digitalWrite(buzzerPin, HIGH);
    delay(3);
    digitalWrite(buzzerPin, LOW);
    delay(3);
  }
  
  delay(1000);
}
