# Which Motor Driver?

Should you use the *L298N motor driver* or the *Arduino-Motor-Shield*?

It will depend on your project. Pros and limitations explained below

---
## Arduino Motor Shield

Reference image [here](https://github.com/kingston-hackSpace/Motors/blob/main/ArduinoMotorShield.jpg)

### What it is:

- An add-on board that sits directly on top of an Arduino.

- Contains H-bridges and circuitry to control motors.

- Can handle 2–4 DC motors depending on the shield.

### Pros:

- Very beginner-friendly; no extra wiring needed.

- Good for small motors (usually 5–12 V, ~1 A per motor).

- Ideal for quick experiments and prototypes.

### Limitations:

- Current per motor is limited (typically ~1 A).

- Less flexible if you want higher voltage or higher current motors.

- Takes up the Arduino headers, leaving less room for sensors or other shields.

### Use when:

- You’re doing lightweight motor projects.

- You want minimal wiring and quick setup.

- Your motors are small and low-current.

----
## L298N Motor Driver Module

Reference image [here](https://github.com/kingston-hackSpace/Motors/blob/main/L298N.jpg)

### What it is:

- A standalone H-bridge motor driver board.

- Can drive 2 DC motors or 1 stepper motor.

- Needs external wiring to Arduino and power supply.

### Pros:

- Can handle higher current motors (up to 2 A per motor).

- Works with 5–12 V motors and higher if needed.

- Allows separate power supply for motors and Arduino.

- Very flexible for larger or interactive projects.

### Limitations:

- More wiring required (motor connections + Arduino control pins + power supply).

### Use when:

- Motors draw more current than the shield allows.

- You want separate power for motors.

- You’re building interactive or higher-power projects.

- You want more control over wiring
