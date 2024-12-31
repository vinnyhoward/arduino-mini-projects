const int LED0 = 13; 
const int LED1 = 12;
const int LED2 = 11;
const int LED3 = 10; 

void setup() {
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
    for(int number = 0; number <= 15; number++) {
    digitalWrite(LED0, number & 1);        // Get bit 0
    digitalWrite(LED1, (number >> 1) & 1); // Get bit 1
    digitalWrite(LED2, (number >> 2) & 1); // Get bit 2
    digitalWrite(LED3, (number >> 3) & 1); // Get bit 3
    
    delay(1000);  
  }
}

// LED3 LED2 LED1 LED0
// 0  =  0    0    0    0
// 1  =  0    0    0    1
// 2  =  0    0    1    0
// 3  =  0    0    1    1
// 4  =  0    1    0    0
// 5  =  0    1    0    1
// 6  =  0    1    1    0
// 7  =  0    1    1    1
// 8  =  1    0    0    0
// 9  =  1    0    0    1
// 10 =  1    0    1    0
// 11 =  1    0    1    1
// 12 =  1    1    0    0
// 13 =  1    1    0    1
// 14 =  1    1    1    0
// 15 =  1    1    1    1