void DecodeAction(char message){
  if(message == '0'){
    //GO HOME
  }else if(message == '1'){
    SetPump(1);
  }else if(message == '2'){
    SetPump(2);
  }else if(message == '3'){
    SetPump(3);
  }else if(message == '4'){
    SetPump(4);
  }else if(message == '5'){
    SetPump(5);
  }
}

void SetPump(int pos){
  currentPump = pos;
}
