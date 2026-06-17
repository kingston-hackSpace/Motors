/* STEPPER MOTOR + EasyDriver sparkfun

Power the driver by using the GROUND and M+ pins
12V Power Supply 

Simple Full Step vs Microsteps example
To run slower, we can use microSteps
*/
////////////////////////////////////////////////

#define stp 2
#define dir 3
#define MS1 4
#define MS2 5
#define EN  6

int stepDelay = 1000; // speed

void setup() {
  Serial.begin(9600);
  delay(1000); //1 second delay to allow easy drivers to power up
  
  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(MS1, OUTPUT);
  pinMode(MS2, OUTPUT);
  pinMode(EN, OUTPUT);

  //ENABLE DRIVER
  digitalWrite(EN, LOW); // Enable the driver to control the motor
  // you might want to disable the driver later to reduce power consumption and heat
  
  //SET DIRECTION
  digitalWrite(dir, LOW); // fixed direction

  Serial.println("Begin motor control");
  delay(1000);
  
}

void loop() {
  // avoid printing in the Serial Monitor 

  //microStep();
  FullStep();

  //accelerate stepper to avoid freezing
  if(stepDelay > 750){ 
    stepDelay--;
    }
}

void microStep() {
  //microStep 1/8
  digitalWrite(MS1, HIGH);
  digitalWrite(MS2, HIGH);
  moveMotor(1);

}

void FullStep(){
  digitalWrite(MS1, LOW); //micro-steps disable
  digitalWrite(MS2, LOW);
  moveMotor(1);   
}


// Move motor a number of steps
void moveMotor(int steps) {
  for (int i = 0; i < steps; i++) {
    digitalWrite(stp, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stp, LOW);
    delayMicroseconds(stepDelay);
  }
}

