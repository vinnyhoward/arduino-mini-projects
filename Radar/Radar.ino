#include <Servo.h>

const int trigPin = 11;
const int echoPin = 12;
long duration;
int distance;
Servo myServo;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  myServo.attach(13);
  
  // Print header
  Serial.println("=== Sonar Detection Started ===");
  Serial.println("Angle (degrees) | Distance (cm)");
  Serial.println("--------------------------------");
}

void loop() {
  // Scanning from 0 to 100 degrees
  for(int i = 0; i <= 100; i++) {  
    myServo.write(i);
    delay(30);
    distance = calculateDistance();
    
    // Print formatted output
    Serial.print("     ");
    if(i < 100) Serial.print(" ");
    if(i < 10) Serial.print(" ");
    Serial.print(i);
    Serial.print("°         |     ");
    if(distance < 100) Serial.print(" ");
    if(distance < 10) Serial.print(" ");
    Serial.print(distance);
    Serial.println(" cm");
  }
  
  Serial.println("--------------------------------");
  Serial.println("Reversing direction...");
  Serial.println("--------------------------------");
  
  // Scanning back from 165 to 15 degrees
  for(int i = 100; i > 15; i--) {  
    myServo.write(i);
    delay(30);
    distance = calculateDistance();
    
    // Print formatted output
    Serial.print("     ");
    if(i < 100) Serial.print(" ");
    if(i < 10) Serial.print(" ");
    Serial.print(i);
    Serial.print("°         |     ");
    if(distance < 100) Serial.print(" ");
    if(distance < 10) Serial.print(" ");
    Serial.print(distance);
    Serial.println(" cm");
  }
  
  Serial.println("--------------------------------");
  Serial.println("Scan complete. Starting new scan...");
  Serial.println("--------------------------------");
}

// Your existing calculateDistance function remains the same
int calculateDistance() { 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  return distance;
}