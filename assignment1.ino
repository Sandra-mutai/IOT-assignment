int red=4;
int green=2;
int amber=3;



void setup(){
//  pinMode(red,OUTPUT);
//  pinMode(green,OUTPUT);
//  pinMode(amber,OUTPUT);
  SETUP();
}
void loop(){ 
 /* for(int j=1;j<=4;j++)
  {digitalWrite(red,HIGH);
   delay(1000);
   digitalWrite(red,LOW);
   delay(1000);
  }
  
   for(int k=1;k<=3;k++)
   {digitalWrite(green,HIGH);
   delay(1000);
   digitalWrite(green,LOW);
   delay(1000);
}
  int b=1;
  while(b<=3)
  {digitalWrite  (amber,HIGH);
    delay(1000);
    digitalWrite(amber,LOW);
    delay(1000);
    b++;

  } 
 */
 AMBER();
 GREEN();
 RED();

}
