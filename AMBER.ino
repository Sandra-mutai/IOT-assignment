  void  AMBER(){
  int b=1;
  while(b<=3)
  {digitalWrite(amber,HIGH);
    delay(1000);
    digitalWrite(amber,LOW);
    delay(1000);
    b++;
  }
  }
