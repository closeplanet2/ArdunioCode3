void CreatePumpMessage(String data){
  char charBufone[data.length() + 1];
  data.toCharArray(charBufone, data.length() + 1);
  sendMessage(charBufone,data.length() + 1);
}

void sendMessage(const char *data, int l){
  byte len[4];
  len[0] = 85; //preamble
  len[1] = 85; //preamble
  len[2] = (l >> 8) & 0x000000FF;
  len[3] = (l & 0x000000FF);
  mySerial.write(len, 4);
  mySerial.flush();
  mySerial.write(data);
  mySerial.flush();
}
