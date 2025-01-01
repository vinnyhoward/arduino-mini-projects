#include <Servo.h>

Servo myservo;//create servo object to control a servo

void setup()
{
  myservo.attach(9);//attachs the servo on pin 15 to servo object
  myservo.write(90);//back to 0 degrees
  delay(1000);//wait for a second
}

void loop()
{
  for (int i = 0; i <= 100; i++)
  {
    myservo.write(i); //write the i angle to the servo
    delay(15); //delay 15ms
  }
  for (int i = 100; i >= 0; i--)
  {
    myservo.write(i); //write the i angle to the servo
    delay(15); //delay 15ms
  }
}