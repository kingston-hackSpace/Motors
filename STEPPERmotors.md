# Stepper Motors

- High Precision: Instead of rotating at a constant speed, stepper motors move in discrete steps.

- Fully programmable: speed, direction, and position.

- Can hold position while powered.

- Widely use in 3D printers.

- Need to be controlled by a motor driver. 

- Requires external power supply (cannot be powered by the Arduino board).

Read more: [Adafruit Stepper Motors Guide](https://learn.adafruit.com/all-about-stepper-motors)

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

    - See reference image [here](https://github.com/kingston-hackSpace/Motors/blob/main/unipolar.jpg)
      
    - Small, low-power motor suitable for lightweight mechanisms.

**Tutorial : Hardware list**

- Unipolar Stepper Motor

- Motor Driver Board (ULN2003)

- Arduino Board

- Power Supply 5V 500mA

**Tutorial: Programming**

*Note: The unipolar stepper motor has a "medium range" max speed. In other words, it cannot run very fast*

Unipolar Stepper Motor Tutorial [here](https://lastminuteengineers.com/28byj48-stepper-motor-arduino-tutorial/)


----
## BIPOLAR Stepper Motor

    - See reference image [here](https://github.com/kingston-hackSpace/Motors/blob/main/bipolarStepper.jpg) 
    
    - More powerful than a 5V motor, providing higher torque (useful for heavier loads).

Tutorial: Hardware list

- Bipolar Stepper Motor 12V

- EasyDriver Motor Driver

- Arduino Board

- Power Supply 12V


### Starter Tutorial

Bipolar Stepper Motor : Starter Tutorial [here](https://learn.sparkfun.com/tutorials/easy-driver-hook-up-guide/all#:~:text=The%20Easy%20Driver%20gives%20you%20the%20capability%20to,need%20everything%20though%20depending%20on%20what%20you%20have)

NOTE:

**M1 and M2** pins are used for micro-stepping. Use them if:

- You want smoother motion

- You want quieter movement

- You want higher positioning resolution

- You’re building something like a clock (very useful!)

**EN pin** = Enable active LOW. Use EN if you want to save power, to release the motor (no holding torque), or to avoid heating.

- LOW → Driver ON

- HIGH → Driver OFF (motor disabled)


### MicroSteps - Example

[MicroSteps Arduino code here](https://github.com/kingston-hackSpace/Motors/blob/main/microSteps_example.ino)


### Speed control - Example

[Speed control Arduino code here](https://github.com/kingston-hackSpace/Motors/blob/main/Speed_Example.ino)


*Note:* See more tutorials at the end of this document

----
## Microstep Driver (TB6600)

Alternatevely to *Easydriver*, Bipolar stepper motors can operate using Microstep Drivers. 

These drivers divide each step into smaller steps (microsteps), resulting in smoother, quieter, and more precise motion.

WARNING! Recommended use up to 12V. 

Tutorial [here](https://www.youtube.com/watch?v=nLV0fjUWI-g&t=26s)

----
## Understanding TORQUE and LOADS

Torque is the rotational force a motor produces. It is key to determine whether a motor can move a load and hold it.

The torque capacity of a stepper motor will depend on:

- Load distance from the shaft

- Mechanical setup: Gears, pulleys, and belts can multiply torque. 

- Speed: Stepper motors usually have higher torque at low speeds and torque decreases as speed increases.

Learn more about **torque** [here](https://steppermotor.net/what-is-the-torque-of-a-stepper-motor/)

Understanding **mechanical advantage** [here](https://www.youtube.com/watch?v=JnYVz1TSmBQ)

Read more abour **gears** [here](https://www.instructables.com/Basic-Gear-Mechanisms/)

Read more abour **pulleys** [here](https://www.instructables.com/Basic-Pulley-Mechanisms/)

----
## 3D-Print motor holders (unipolar only)

[28BYJ-48 Stepper Motor Mount](https://www.printables.com/model/201405-28byj-48-stepper-motor-mount/files)

[28BYJ-48 Stepper motor holder and top plate](https://www.thingiverse.com/thing:3018451)

----
## More tutorials

**ADD BUTTONS:**

[More tutorials: Add buttons, speed control, joytick and more](https://www.schmalzhaus.com/EasyDriver/Examples/EasyDriverExamples.html)

**MAKE A CLOCK:**

[Motorized Clock with a Unipolar Stepper Motor](https://github.com/kingston-hackSpace/Project_Motorized-Clock/blob/main/README.md)

**MAKE A ROTATING DISPLAY:**

- Rotary display | No motor example:

[Manual Rotating Photo Display Stand](https://makerworld.com/en/models/1198124-rotating-photo-display-stand-recycled-spool?from=search#profileId-1211060)

- Rotary display | Unipolar Stepper:

[3D Printed Rotating Display Stand](https://www.youtube.com/watch?v=QSZIvSx3qa8)

[How To Make Motorized Turntable](https://www.youtube.com/watch?v=scI8uqEy0xY)

- Rotary display | Bipolar Stepper:

[Instructables: Automated Turntable With Steppermotor](https://www.instructables.com/Automated-Turntable-With-Steppermotor/)

[Rotary base and stepper motor NEMA, automatic lazy Susan](https://www.youtube.com/watch?v=jVDTTL6pINc)

[DIY Rotating Display Stand](https://www.youtube.com/watch?v=FnpqFsf06sc)


