//STEPPER MOTOR + EasyDriver sparkfun
// Power the driver by using the GROUND and M+ pins
// 12V Power Supply 

#define stp 2
#define dir 3
#define MS1 4
#define MS2 5
#define EN  6

void setup() {
  Serial.begin(9600);
  delay(1000); //1 second delay to allow easy drivers to power up
  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(MS1, OUTPUT);
  pinMode(MS2, OUTPUT);
  pinMode(EN, OUTPUT);

  Serial.println("Begin motor control");
  
}

void loop() {
  // avoid printing in the Serial Monitor

  digitalWrite(dir, LOW); // Set direction clockwise
  mictroStep(); // Step the motor
  //StepForward();
}

void mictroStep() {
    digitalWrite(stp, HIGH);
    delayMicroseconds(500); // change delay to change speed
    digitalWrite(stp, LOW); 
    delayMicroseconds(500);
}

void StepForward(){
  //avoid printing in the serial monitor
    digitalWrite(stp,HIGH); //Trigger one step forward
    delay(10);
    digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
    delay(10);
}


