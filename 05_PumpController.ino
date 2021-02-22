void TriggerPump(int pump){
  switch (pump) {
    case 1:
      servoOne.write(90);
      servoTwo.write(90);
      delay(1000);
      servoOne.write(0);
      servoTwo.write(0);
      delay(1000);
      break;
    case 2:
      servoThree.write(90);
      servoFour.write(90);
      delay(1000);
      servoThree.write(0);
      servoFour.write(0);
      delay(1000);
      break;
    case 3:
      servoFive.write(90);
      servoSix.write(90);
      delay(1000);
      servoFive.write(0);
      servoSix.write(0);
      delay(1000);
      break;
    case 4:
      servoSeven.write(90);
      servoEight.write(90);
      delay(1000);
      servoSeven.write(0);
      servoEight.write(0);
      delay(1000);
      break;
    case 5:
      servoNine.write(90);
      servoTen.write(90);
      delay(1000);
      servoNine.write(0);
      servoTen.write(0);
      delay(1000);
      break;
  }
}
