
/*
 * Robot arm code uding a joystick
 * code used from arduino project: Project 5 - Servo Mood Indicator (not all of it tho :D)
 * Version 1.0.0
 * started: 2026-04-08
 * finished: 2026-04-08
 * by Nolan Kelly
*/

// Librarys
#include <Servo.h>

// Variables
int const joyPinX = A0;
int const joyPinY = A1;
int joyValX;
int joyValY;
int angleX;
int angleY;

// Servos
Servo servoX; // servo used for x-axis on joystick
Servo servoY; // servo used for y-axis on joystick

void setup() {
  servoX.attach(5); // attach servoX to pin 5
  servoY.attach(6); // attach servoY to pin 6
}

void loop() {
  joyValX = analogRead(joyPinX); // reads the Joystick X axis value
  joyValY = analogRead(joyPinY); // reads the Joystick Y axis value
  
  angleX = map(joyValX, 0, 1023, 0, 179); // scale the numbers from the X value
  angleY = map(joyValY, 0, 1023, 0, 179); // scale the numbers from the Y value

  servoX.write(angleX); // writes the angle of the Joystick X value to the X servo
  servoY.write(angleY); // writes the angle of the Joystick Y value to the Y servo

  delay(15);
}
