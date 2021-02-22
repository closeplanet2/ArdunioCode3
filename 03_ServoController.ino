void SetupServoMotors(){
  servoOne.attach(51);
  servoTwo.attach(50);
  servoThree.attach(49);
  servoFour.attach(48);
  servoFive.attach(47);
  servoSix.attach(46);
  servoSeven.attach(45);
  servoEight.attach(44);
  servoNine.attach(43);
  servoTen.attach(42);

  servoOne.write(0);
  servoTwo.write(0);
  servoThree.write(0);
  servoFour.write(0);
  servoFive.write(0);
  servoSix.write(0);
  servoSeven.write(0);
  servoEight.write(0);
  servoNine.write(0);
  servoTen.write(0);
}

void GetDistanceFromSensor(){
  distanceSensor.startRanging(); //Write configuration bytes to initiate measurement

  while (!distanceSensor.checkForDataReady()){
    delay(1);
  }
  
  distance = distanceSensor.getDistance(); //Get the result of the measurement from the sensor
  distanceSensor.clearInterrupt();
  distanceSensor.stopRanging();
}

void CheckMotorFunctions(){
  currentDistance = distanceList[currentPump-1];
  Serial.print(String(distance) + "/" + String(currentDistance)+ '\n');
  IsPumpUnderNosel(distance, currentPump);
}

void IsPumpUnderNosel(int distance, int pump){
  int min = currentDistance - offsetDistance;
  int max = currentDistance + offsetDistance;

  if(distance > min && distance < max){
    TriggerPump(pump);
    currentPump = -1;
    CreatePumpMessage("a");
  }
}
