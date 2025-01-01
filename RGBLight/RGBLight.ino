const int RED_PIN = 7;
const int GREEN_PIN = 6;
const int BLUE_PIN = 5;

void setup() {
  // pinMode(RED_PIN, OUTPUT); 
  // pinMode(GREEN_PIN, OUTPUT); 
  // pinMode(BLUE_PIN, OUTPUT); 
}

void color (unsigned char red, unsigned char green, unsigned char blue) {    
  analogWrite(RED_PIN, red);   
  analogWrite(GREEN_PIN, green); 
  analogWrite(BLUE_PIN, blue); 
}

void loop() {    
  // // Basic colors:  
  // color(255, 0, 0); //red 
  // delay(500);  
  // color(0,255, 0); //green  
  // delay(500);  
  // color(0, 0, 255); //blue  
  // delay(500); 
  
  // // Example blended colors:  
  // color(255,0,252); //red  
  // delay(500);  
  // color(237,109,0); //orange  
  // delay(500);  
  // color(255,215,0); //yellow  
  // delay(500);  
  // color(34,139,34); //green  
  // delay(500); 
  // color(0,112,255); //blue  
  // delay(500); 
  // color(0,46,90); // indigo 
  // delay(500); 
  // color(128,0,128); //purple  
  // delay(500); 
} 
