# Stepper Motors

- High Precision: Instead of rotating at a constant speed, stepper motors move in discrete steps.

- Fully programmable: speed, direction, and position.

- Can hold position while powered.

- Widely use in 3D printers.

- Need to be controlled by a motor driver. 

- Requires external power supply (cannot be powered by the Arduino board).

----
## Available at hackSpace:

- **Unipolar Stepper Motor 5V**:

    - See reference image [here](https://github.com/kingston-hackSpace/Motors/blob/main/unipolar.jpg)
      
    - Small, low-power motor suitable for lightweight mechanisms.
  
- **Bipolar Stepper motor 12V (large and small)**:

    - See reference image [here](https://github.com/kingston-hackSpace/Motors/blob/main/bipolarStepper.jpg) 
    
    - More powerful than a 5V motor, providing higher torque (useful for heavier loads).

----
**Important safety note**

Motors draw more current than LEDs or sensors.

- Always check that your power supply can provide enough current for the motor you are using.

- USB ports and Arduino pins cannot power motors directly.

- Using an unsuitable power source can cause overheating, unexpected resets, or damage to components.
  
----
# TUTORIALS
----

## UNIPOLAR Stepper Motor 5V

Hardware

- Unipolar Stepper Motor

- Motor Driver Board (ULN2003)

- Arduino Board

- Power Supply 5V

Tutorial [here](https://lastminuteengineers.com/28byj48-stepper-motor-arduino-tutorial/)

----
## BIPOLAR Stepper Motor

Hardware

- Bipolar Stepper Motor 12V

- EasyDriver Motor Driver

- Arduino Board

- Power Supply 12V

Tutorial [here](https://www.norwegiancreations.com/2014/12/arduino-tutorial-stepper-motor-with-easydriver/)

Advanced Tutorial [here](https://learn.sparkfun.com/tutorials/easy-driver-hook-up-guide/all#:~:text=The%20Easy%20Driver%20gives%20you%20the%20capability%20to,need%20everything%20though%20depending%20on%20what%20you%20have)

----
## Microstep Driver (TB6600)

Alternatevely to *Easydriver*, Bipolar stepper motors can operate using Microstep Drivers. 

These drivers divide each step into smaller steps (microsteps), resulting in smoother, quieter, and more precise motion.

WARNING! Recommended use up to 12V. 

Tutorial [here](https://www.youtube.com/watch?v=nLV0fjUWI-g&t=26s)


