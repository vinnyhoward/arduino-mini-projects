void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
    digitalWrite(13, HIGH);
    delay(250);   
    digitalWrite(12, HIGH);
    delay(250); 
    digitalWrite(11, HIGH);
    delay(250); 
    digitalWrite(10, HIGH);
    delay(250); 

    digitalWrite(13, LOW);
    delay(250);   
    digitalWrite(12, LOW);
    delay(250); 
    digitalWrite(11, LOW);
    delay(250); 
    digitalWrite(10, LOW);
    delay(250); 

    delay(500); 
    digitalWrite(13, HIGH); 
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);

    delay(500); 
    digitalWrite(13, LOW); 
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);

    delay(500); 
    digitalWrite(13, HIGH); 
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);

    delay(500); 
    digitalWrite(13, LOW); 
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    delay(1000); 
}

