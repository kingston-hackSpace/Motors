/* MicroStepping Tutorial - EasyDriver */

// You will need to select case (steps or microSteps), and speed

#define STP 2
#define DIR 3
#define MS1 4
#define MS2 5
#define EN  6

int stepDelay = 1000; // speed
int speedValue = 1;   // 1 = slow, 10 = fast
int mode = 3; // 0 - 3

void setup() {
  Serial.begin(9600);
  delay(1000); //1 second delay to allow easy drivers to power up

  pinMode(STP, OUTPUT);
  pinMode(DIR, OUTPUT);
  pinMode(MS1, OUTPUT);
  pinMode(MS2, OUTPUT);
  pinMode(EN, OUTPUT);

  digitalWrite(EN, LOW);   // enable driver
  digitalWrite(DIR, LOW);  // set direction
  
  Serial.println("Micro Stepping Demo");
}

void loop() {
  updateSpeed();
  setMicrostep(mode);   // select mode, see below
  stepMotor();       // keep stepping

  // accelerate stepper to avoid freezing
  // if (stepDelay > 750) {
  //   stepDelay--;
  // }

}

// --------- SPEED CONTROL ---------
void updateSpeed() {
  // map speed (1–10) to delay (slow → fast)
  stepDelay = map(speedValue, 1, 10, 1500, 200);
}

// --------- SIMPLE STEP FUNCTION ---------
void stepMotor() {
  digitalWrite(STP, HIGH);
  delayMicroseconds(stepDelay);
  digitalWrite(STP, LOW);
  delayMicroseconds(stepDelay);
}

// --------- MICROSTEPPING ---------
void setMicrostep(int mode) {
  if (mode == 0) {           // Full step
    digitalWrite(MS1, LOW);
    digitalWrite(MS2, LOW);
  } 
  else if (mode == 1) {      // Half step
    digitalWrite(MS1, HIGH);
    digitalWrite(MS2, LOW);
  } 
  else if (mode == 2) {      // Quarter step
    digitalWrite(MS1, LOW);
    digitalWrite(MS2, HIGH);
  } 
  else if (mode == 3) {      // Eighth step
    digitalWrite(MS1, HIGH);
    digitalWrite(MS2, HIGH);
  }
}
