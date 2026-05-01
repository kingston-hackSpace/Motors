#include <Servo.h>
Servo myservo;    

void setup() {
  myservo.attach(9); // Attach the servo to pin 9
}

void loop() {
myservo.write(1); //  fast / counter-clockwise
delay (2000);

myservo.write(87); // slow / counter-clockwise
delay (2000);

myservo.write(90); //////////////////////////// stop the motor
delay (2000);

myservo.write(93); //  slow / counter-clockwise
delay (2000);

myservo.write(180); //  slow / counter-clockwise
delay (2000);
}
