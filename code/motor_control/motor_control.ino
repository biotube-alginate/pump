#include <Stepper.h>

// Define the number of steps for each motor
#define STEPS_LEFT 200
// #define STEPS_RIGHT 200
// #define STEPS_MANDREL 200

// Create instances of the Stepper class for each motor
Stepper stepper_left(STEPS_LEFT, 2, 3, 4, 5);
// Stepper stepper_right(STEPS_RIGHT, 6, 7, 8, 9);
// Stepper stepper_mandrel(STEPS_MANDREL, 10, 11, 12, 13);

// Variables to keep track of the last step time for each motor
unsigned long lastStepTimeLeft = 0;
// unsigned long lastStepTimeRight = 0;
// unsigned long lastStepTimeMandrel = 0;

// Variables for left motor speed control
float desiredRPMLeft = 0.2; // Initial RPM for left motor
float minRPMLeft = 0.1; // Minimum RPM for left motor
float maxRPMLeft = 5; // Maximum RPM for left motor

// Variables for right motor speed control
// float desiredRPMRight = 1; // Initial RPM for right motor
// float minRPMRight = 0.001; // Minimum RPM for right motor
// float maxRPMRight = 1; // Maximum RPM for right motor

// Variables for mandrel motor control
// float desiredRPMMandrel = 30;  // Set desired RPM for mandrel motor
// bool mandrelActive = false;    // Flag to control mandrel motor
// int mandrelDirection = -1;      // 1 for forward, -1 for reverse
// int stepsCount = 0;            // Steps counter for mandrel motor
// const int stepsPerTurn = STEPS_MANDREL / 8; // Steps per 1/8 turn

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  unsigned long currentTime = millis();

  // Check for serial input
  // if (Serial.available() > 0) {
  //   char command = Serial.read();
  //   if (command == 's') {
  //     mandrelActive = true;
  //     lastStepTimeMandrel = currentTime;
  //   }
  //   else if (command == 'e') {
  //     mandrelActive = false;
  //   }
  // }

  // Read analog values from potentiometers
    int analogValueLeft = analogRead(A1);
  // int analogValueRight = analogRead(A0);

  // Map analog values to desired RPM ranges
  desiredRPMLeft = map(analogValueLeft, 0, 1023, minRPMLeft * 1000, maxRPMLeft * 1000) / 1000.0;
  // desiredRPMRight = map(analogValueRight, 0, 1023, minRPMRight * 1000, maxRPMRight * 1000) / 1000.0;

  // Calculate step delays for each motor
  float stepDelayLeft = (60.0 * 1000.0) / (STEPS_LEFT * desiredRPMLeft);
  // float stepDelayRight = (60.0 * 1000.0) / (STEPS_RIGHT * desiredRPMRight);
  // float stepDelayMandrel = (60.0 * 1000.0) / (STEPS_MANDREL * desiredRPMMandrel);  // Use desiredRPMMandrel for mandrel

  // Control Right Motor
  // if (currentTime - lastStepTimeRight >= stepDelayRight) {
  //   int stepsToTakeRight = (currentTime - lastStepTimeRight) / stepDelayRight;
  //   stepper_right.step(stepsToTakeRight);
  //   lastStepTimeRight = currentTime;
  // }

  // Control Left Motor
  if (currentTime - lastStepTimeLeft >= stepDelayLeft) {
    int stepsToTakeLeft = (currentTime - lastStepTimeLeft) / stepDelayLeft;
    stepper_left.step(-stepsToTakeLeft);
    lastStepTimeLeft = currentTime;
  }

  // Control Mandrel Motor if the command was received
  // if (mandrelActive) {
  //   if (currentTime - lastStepTimeMandrel >= stepDelayMandrel) {
  //     int stepsToTakeMandrel = (currentTime - lastStepTimeMandrel) / stepDelayMandrel;
  //     stepper_mandrel.step(mandrelDirection * stepsToTakeMandrel);
  //     lastStepTimeMandrel = currentTime;

  //     stepsCount += stepsToTakeMandrel;
      
  //     // If mandrel has completed 1/8 turn
  //     if (stepsCount >= stepsPerTurn) {
  //       stepsCount = 0; // Reset the steps counter
  //       mandrelDirection *= -1; // Reverse direction

  //       // Pause for 1 second after completing 1/8 turn
  //       delay(2000);
  //       currentTime = millis();
  //       lastStepTimeMandrel = currentTime;
  //     }
  //   }
  // }
}