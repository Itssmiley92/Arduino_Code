
/*
 * Robot arm code uding a joystick
 * Some code reused from arduino project: Project 5 - Servo Mood Indicator (not all of it tho :D)
 * Version 1.1
 * started: 2026-04-08
 * finished: 2026-04-09
 * by Nolan Kelly
*/

// Librarys
#include <Servo.h>

// Variables
const int joyPinX = A0;
const int joyPinY = A1;
const int joyPinZ = A2;
const int joyPinW = A3;
int joyValX;
int joyValY;
int joyValZ;
int joyValW;
int angleX;
int angleY;
int angleZ;
int angleW;

// Servos
Servo servoX;
Servo servoY;
Servo servoZ;
Servo servoW;

void setup() {
  Serial.begin(9600);
  servoX.attach(5); // attach servoX to pin 5
  servoY.attach(6); // attach servoY to pin 6
  servoZ.attach(9);
  servoW.attach(10);
}

void loop() {
  joyValX = analogRead(joyPinX); // reads the Joystick X axis value
  joyValY = analogRead(joyPinY); // reads the Joystick Y axis value
  joyValZ = analogRead(joyPinZ);
  joyValW = analogRead(joyPinW);
  
  Serial.print("Joystick1");
  Serial.println();
  Serial.print(joyValX);
  Serial.print(" | ");
  Serial.print(joyValY);
  Serial.println();
  delay(500)
  Serial.print("Joystick2");
  Serial.println();
  Serial.print(joyValZ);
  Serial.print(" | ");
  Serial.print(joyValW);
  Serial.println()
  
  angleX = map(joyValX, 0, 1023, 0, 179); // scale the numbers from the X value
  angleY = map(joyValY, 0, 1023, 0, 179); // scale the numbers from the Y value
  angleZ = map(joyValZ, 0, 1023, 0, 179);
  angleW = map(joyValW, 0, 1023, 0, 179);
  
  servoX.write(angleX); // writes the angle of the Joystick X value to the X servo
  servoY.write(angleY); // writes the angle of the Joystick Y value to the Y servo
  servoZ.write(angleZ);
  servoW.write(angleW);
  
  delay(15);
}
