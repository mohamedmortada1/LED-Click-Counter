int redled=3;
int button=2;
int blueled=4;
int yellowled=5;
int x=0;
void setup()
{
  pinMode(redled,OUTPUT);
  pinMode(blueled,OUTPUT);
  pinMode(yellowled,OUTPUT);
  pinMode(button,INPUT);
  
}
void loop()
{
  if(digitalRead(button)==HIGH)
  {x=x+1;delay(300);}
  
  if(x==1){digitalWrite(redled,HIGH);}
  if(x==2){digitalWrite(blueled,HIGH);}
  if(x==3){digitalWrite(yellowled,HIGH);}
  if(x==4){digitalWrite(redled,LOW); digitalWrite(blueled,LOW);
           digitalWrite(yellowled,LOW); x=0;}
}
 
