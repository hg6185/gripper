#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int pos;

void setup() {
myservo.attach(6);  // attaches the servo on pin 9 to the servo object
Serial.begin(9600);
pos = 10;
}

void loop()
{
    while(Serial.available() == 0)
        {
          myservo.write(pos); 
        }
        pos = Serial.parseInt();
        myservo.write(pos); 

}
