void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  Wire.begin();
  SetupServoMotors();
}
