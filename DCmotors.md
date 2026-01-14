# DC MOTORS

DC (Direct Current) motors convert electrical energy into mechanical energy, producing continuous rotational movement. They are commonly used to create motion in physical computing projects such as kinetic sculptures, rotating elements, and simple robotics.

----
## Available at hackSpace:

- **DC Motor 5V**: Small, low-power motor suitable for lightweight mechanisms.
  
- **DC Motor 12V**: More powerful than a 5V motor, providing higher torque (useful for heavier loads).

- **DC Motor 5V, 90 degree shaft**: Compact motor with a right-angle shaft, useful where space or orientation is limited.

----
## DC Motor : power on/off

A DC motor spins when electrical power is applied. 

You can simply turn your motor on and off by connecting it to a DC power supply (5V or 12V, depending on the motor). The motor will continue to spin as long as power is applied.

DC motors change direction depending on polarity. To change the direction of rotation, reverse the two cables connected to the motor.
⚠️ Always turn off the power before swapping wires.

You can add a *[PWM motor controller](https://www.amazon.co.uk/RUNCCI-YUN-controller-Adjustable-Regulator-Switching/dp/B09SH3P8QC/ref=sr_1_6?dib=eyJ2IjoiMSJ9.W-TUPp14Bk2esWaTXsjSftqH0ozdr6zgktmilCCuXLHud4Nbm8GbPUaGfEMIQY8dVYIrfhWDtpMK1JqO031FY1dFhozuosov-lM9fSIPJemBs9KrtfQDjF0fRwG2xW_yUL6gTe7ii6za6klTQkSPr5CGBMLR0fXyVsGN0qwRqP27c0rM68puwWYZhj1PFHzT4rDrjVZzbGC0XtN8ZGbtP5TpWvIKRBG30oHJ2vWnUYjCs9AcIZyASeezQqmSOnXfIJEjFWF16RukbhijkOTX8ewZwrwK_ZGLt3simbiqd9A.dy_qzwo-3NTyABSg1pFMor2d5ViUHnFTmi1xHjCzIbI&dib_tag=se&keywords=PWM+Controllers&qid=1767626819&sr=8-6&utm_source=chatgpt.com)* to control the speed of a DC motor using a physical knob, without any programming.

**Important safety note**

Motors draw more current than LEDs or sensors.

- Always check that your power supply can provide enough current for the motor you are using.

- USB ports and Arduino pins cannot power motors directly.

- Using an unsuitable power source can cause overheating, unexpected resets, or damage to components.

----
## DC Motor : Programming with Arduino

### **HARDWARE**

- Hardware

- Arduino UNO

- DC motor (5 V or 12 V, depending on your motor)

- Motor driver ([e.g., L298N or Arduino Motor Shield](https://github.com/kingston-hackSpace/Motors/blob/main/L298N_or_ArduinoMotorShield.md))

- External power supply for the motor (Arduino pins cannot supply enough current)


### INSTRUCTIONS

- [DC motor + Arduino Motor Shield](https://www.instructables.com/Arduino-Motor-Shield-Tutorial/)

- [DC motor + LL98N Motor Driver]([)](https://www.hackster.io/ryanchan/how-to-use-the-l298n-motor-driver-b124c5)
