# Servo Motors

Read more about Servo Motors [here](https://www.sparkfun.com/servos)

----
## Multiple Servos : Be cautious! 

**POWERING WARNING!**

If you plan to use more than one servo motor, you will need more power than the one provided by your Arduino board. 
Read below. 

**MULTIPLE SERVO MOTORS**
If you plan to use **more than four** servo motors, you will need extra equipment and power. More info below. 

----
# Servo Motor 180 degrees (5V) :

A 180° servo motor is a standard positional servo that rotates through approximately 180 degrees. When given a PWM signal from a microcontroller, it moves to the requested angle within its 0–180° range and actively holds that position.

**How to use:** 

[Begginers: Servo 180 Tutorial](https://docs.arduino.cc/tutorials/generic/basic-servo-control/)

[Servo control with a potentiometer](https://www.allaboutcircuits.com/projects/servo-motor-control-with-an-arduino/)

[Controlling four 180-servos]

[Controlling multipe 180-servos]

----
# Servo Motor dual 270 degrees (5V)

A 270° servo motor is a positional servo that can rotate through approximately 270 degrees instead of the usual 180 degrees.

**How to use:** 

- Programming a 270° servo is essentially the same as a 180° servo, but the range of motion extends to 270°.

- The midpoint is 135°.

- Speed and smoothness are controlled by how quickly you change angles; the servo always tries to reach the commanded position.

----
# Servo Motor 360 degrees (5V)

A 360° continuous servo does not control position. 

Instead, it functions like a DC gear motor with built-in speed and direction control.

Continuous servos can rotate indefinitely in either direction.

The PWM signal determines how fast and in which direction it rotates, but there is no feedback for absolute position. Continuous servos are useful for wheels, conveyor belts, and other applications requiring rotation, but they are not suitable for applications that need precise angular positioning.

**How to use:** 

**HARDWARE:**

- 360 continuous servo motor

- micro-controller

- Power supply 5V, 500mA(min)

 
**WIRING:**

The servo needs more power than the arduino can provide, therefore, it needs external power, otherwise, you may overheat the Arduino Board and damage it. 

See Wiring Diagram [here](https://github.com/kingston-hackSpace/Motors/blob/main/servo360_wiring.jpg)

**CODE and INSTRUCTIONS:**

    - myservo.write(45); // rotate the motor counter-clockwise

    - myservo.write(90); // stop the motor

    - myservo.write(135); // rotate the motor clockwise




Using the myservo.write() line on a continuous rotation servo motor, we can **control the direction and the speed of rotation**. Also, the same line stops its rotation. 

**ROTATE COUNTER-CLOCKWIRE:** (0-89)

**STOP:** (90)

**ROTATE CLOCKWISE (91-180)**. Any value greater than 90 causes the servo to rotate clockwise, and determines the speed. For instance, myservo.write(95) will make the motor start rotating very slowly while using myservo.write(180) sets the motor at full clockwise speed.

