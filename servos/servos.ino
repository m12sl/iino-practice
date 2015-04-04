/*
    Just a servos example for Galileo Gen2
 */

#define SERVOLEFTNULL 2250
#define SERVORIGHTNULL 920

#define SERVOPINLIFT  3
#define SERVOPINLEFT  5
#define SERVOPINRIGHT 6


#include <Servo.h>


int servoLift = 1500;

Servo servo1;  //
Servo servo2;  //
Servo servo3;  //

int last_min = 0;

void setup()
{
  pinMode(SERVOPINLIFT, OUTPUT);
  pinMode(SERVOPINLEFT, OUTPUT);
  pinMode(SERVOPINRIGHT, OUTPUT);
  servo1.attach(SERVOPINLIFT);  //  lifting servo
  servo2.attach(SERVOPINLEFT);  //  left servo
  servo3.attach(SERVOPINRIGHT);  //  right servo
  delay(1000);

}




void loop()
{
    servo1.write(80);
    delay(1000);
    servo1.write(90);
    delay(1000);
    servo2.write(100);
    delay(2000);
    servo2.write(80);
    delay(2000);
    servo3.write(120);
    delay(3000);
    servo3.write(70);
    delay(3000);
}