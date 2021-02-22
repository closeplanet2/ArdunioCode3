void loop() {
  if(mySerial.available()){
    char msg[2];
    msg[0] = mySerial.read();
    msg[1] = mySerial.read();
    DecodeAction(msg[0]);
  }

  if(currentPump != -1){
    GetDistanceFromSensor();
    delay (300);
    CheckMotorFunctions();
  }else{
    currentDistance = -1;
  }
   
}
