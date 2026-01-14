# Stepper Mottors

High Precision: Instead of rotating at a constant speed, stepper motors move in discreet steps.

Fully programmable: speed, direction, and position.

Can hold position while powered.

Widely use in 3D printers.

Need to be controlled by a motor driver. 

Requires external power supply (cannot be powered by the Arduino board).

Learn more at [this LinkedIn Tutorial](https://www.linkedin.com/learning-login/share?account=56743409&forceAccount=false&redirect=https%3A%2F%2Fwww.linkedin.com%2Flearning%2Flearning-arduino-interfacing-with-analog-devices%2Fstepper-motor-introduction%3Ftrk%3Dshare_video_url%26shareId%3D7WPA8OSNQNiYFrPG7lh2ng%253D%253D  )


----
## Available at hackSpace:

- **Unipolar Stepper Motor 5V**:

    - See [reference image](https://github.com/kingston-hackSpace/Motors/blob/main/unipolar.jpg)
      
    - Small, low-power motor suitable for lightweight mechanisms.
  
- **Bipolar Stepper motor 12V (large and small)**:
    
    - More powerful than a 5V motor, providing higher torque (useful for heavier loads).
 
----
**Important safety note**

Motors draw more current than LEDs or sensors.

- Always check that your power supply can provide enough current for the motor you are using.

- USB ports and Arduino pins cannot power motors directly.

- Using an unsuitable power source can cause overheating, unexpected resets, or damage to components.
- 
----
# TUTORIALS
----

## UNIPOLAR Stepper Motor 

Hardware

- Unipolar Stepper Motor

- Motor Driver Board (ULN2003)

- Arduino Board

- Power Supply 5V

Tutorial [here]

----
## BIPOLAR Stepper Motor

Hardware

- Bipolar Stepper Motor

- EasyDriver Motor Driver

- Arduino Board

- Power Supply 12V


Tutorial [here](https://www.norwegiancreations.com/2014/12/arduino-tutorial-stepper-motor-with-easydriver/)


