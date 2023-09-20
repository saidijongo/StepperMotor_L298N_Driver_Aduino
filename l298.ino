//200 speed for NEMA, 48 for 1728BYJ-48
#include <Stepper.h>

const int steps_per_rev = 200; 
#define IN1 9
#define IN2 8
#define IN3 7
#define IN4 6

Stepper motor(steps_per_rev, IN1, IN2, IN3, IN4);


void setup()
{
  motor.setSpeed(80);
  Serial.begin(115200);
}

void loop() 
{
  Serial.println("Rotating Clockwise...");
  motor.step(steps_per_rev);
  delay(500);

  Serial.println("Rotating Anti-clockwise...");
  motor.step(-steps_per_rev);
  delay(500);
}
