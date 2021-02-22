#include <Servo.h>
#include <SoftwareSerial.h>
#include "SparkFun_VL53L1X.h"
#include <Wire.h>

SFEVL53L1X distanceSensor;
SoftwareSerial my_serial(11, 12);

Servo servoOne;
Servo servoTwo;
Servo servoThree;
Servo servoFour;
Servo servoFive;
Servo servoSix;
Servo servoSeven;
Servo servoEight;
Servo servoNine;
Servo servoTen;

int distanceList[] = {245,205,165,125,85};

int offsetDistance = 50;
int timeToFillShot = 1000;

int currentPump = -1;
int distance =0;
int currentDistance = -1;

//n
