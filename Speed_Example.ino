const int stepPin = 2;
const int dirPin  = 3;

unsigned long stateStartTime = 0;
int state = 0;

// Pulse timing (microseconds between pulses)
unsigned long stepInterval;
unsigned long lastStepTime = 0;

void setup() {
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

  digitalWrite(dirPin, HIGH);   // Fixed direction

  stateStartTime = millis();
}

void loop() {

  unsigned long currentMillis = millis();

  // -------- STATE MACHINE --------
  switch(state) {

    case 0: // Medium speed (5s)
      stepInterval = 1000;
      if (currentMillis - stateStartTime >= 5000) {
        state = 1;
        stateStartTime = currentMillis;
      }
      break;

    case 1: // Hold (2s)
      stepInterval = 0;
      if (currentMillis - stateStartTime >= 2000) {
        state = 2;
        stateStartTime = currentMillis;
      }
      break;

    case 2: // Faster (5s)
      stepInterval = 80; // 80 max speed the motor can handle
      if (currentMillis - stateStartTime >= 5000) {
        state = 3;
        stateStartTime = currentMillis;
      }
      break;

    case 3: // Hold (2s)
      stepInterval = 0;
      if (currentMillis - stateStartTime >= 2000) {
        state = 4;
        stateStartTime = currentMillis;
      }
      break;

    case 4: // Slower (5s)
      stepInterval = 4000;
      if (currentMillis - stateStartTime >= 5000) {
        state = 5;
        stateStartTime = currentMillis;
      }
      break;

    case 5: // Hold (2s)
      stepInterval = 0;
      if (currentMillis - stateStartTime >= 2000) {
        state = 0;
        stateStartTime = currentMillis;
      }
      break;
  }

  // -------- STEPPING --------
  if (stepInterval > 0) {
    if (micros() - lastStepTime >= stepInterval) {
      lastStepTime = micros();

      digitalWrite(stepPin, HIGH);
      delayMicroseconds(2);
      digitalWrite(stepPin, LOW);
    }
  }

}
