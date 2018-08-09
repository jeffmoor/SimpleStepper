/*
 Name:		SimpleStepper.ino
 Created:	8/9/2018 1:02:48 PM
 Author:	Jeff
*/



// Arduino stepper motor control code

#include <Stepper.h> // Include the header file

// change this to the number of steps on your motor
#define STEPS 2048	//the motor is 32 steps, but geared down by 5

// create an instance of the stepper class using the steps and pins
Stepper stepper1(STEPS, 8, 10, 9, 11);
Stepper stepper2(STEPS, 4, 6, 5, 7);

int val = 0;

void setup() {
	Serial.begin(9600);
	stepper1.setSpeed(16);
	stepper2.setSpeed(16);
}

void loop() {

	stepper1.step(STEPS);

	stepper2.step(STEPS);

	stepper1.step(-STEPS);

	stepper2.step(-STEPS);

/*
	if (Serial.available()>0)
	{
		val = Serial.parseInt();
		stepper.step(val);
		Serial.println(val); //for debugging
	}
*/
}
