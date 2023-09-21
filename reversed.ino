#include <Stepper.h>

const int stepsPerRevolution = 150;  

Stepper myStepper(stepsPerRevolution, 2,3,8,9);

void setup() {
  myStepper.setSpeed(60);
  Serial.begin(115200);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("CW");
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  Serial.println("CCW");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
