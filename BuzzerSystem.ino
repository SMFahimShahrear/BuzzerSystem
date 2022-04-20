#define btn1 6
#define btn2 5
#define btn3 4
#define btn4 3
#define btn5 2
#define btnrst 8
#define ledrst 9
#define bzr 7
#define segup 15
#define segur 17
#define segul 16
#define segmdl 14
#define segdl 10
#define segdwn 18
#define segdr 11

#define uint8 unsigned char
uint8 flag=0;
uint8 b1state,b2state,b3state,b4state=0,b5state=0,b6state=0;

void setup()
{
  pinMode(bzr,OUTPUT);
  pinMode(ledrst,OUTPUT);
  pinMode(segup,OUTPUT);
  pinMode(segul,OUTPUT);
  pinMode(segur,OUTPUT);
  pinMode(segmdl,OUTPUT);
  pinMode(segdwn,OUTPUT);
  pinMode(segdl,OUTPUT);
  pinMode(segdr,OUTPUT);
  pinMode(btn1,INPUT_PULLUP);
  pinMode(btn2,INPUT_PULLUP);
  pinMode(btn3,INPUT_PULLUP);
  pinMode(btn4,INPUT_PULLUP);
  pinMode(btn5,INPUT_PULLUP);
  pinMode(btnrst,INPUT_PULLUP);

  digitalWrite (ledrst,LOW);
  digitalWrite(segup,LOW);
  digitalWrite(segul,LOW);
  digitalWrite(segur,LOW);
  digitalWrite(segmdl,HIGH);
  digitalWrite(segdwn,LOW);
  digitalWrite(segdl,LOW);
  digitalWrite(segdr,LOW);
  }

  void loop()
{
  b6state = digitalRead(btnrst);
  
  if(b6state==0)
  {
    if(b6state==0)
    {
      flag =1;
      digitalWrite(ledrst,HIGH);
      delay(200);
    }
      digitalWrite(ledrst,LOW);
      digitalWrite(segup,LOW);
      digitalWrite(segul,LOW);
      digitalWrite(segur,LOW);
      digitalWrite(segmdl,HIGH);
      digitalWrite(segdwn,LOW);
      digitalWrite(segdl,LOW);
      digitalWrite(segdr,LOW);
  }

  
  if(flag==1)
  {
   b1state = digitalRead(btn1);
   b2state = digitalRead(btn2);
   b3state = digitalRead(btn3);
   b4state = digitalRead(btn4);
   b5state = digitalRead(btn5);
    if(b1state==0)
    {
    flag = 0;
    digitalWrite (ledrst,LOW);
    Alarm();
    digitalWrite(segup,LOW);
    digitalWrite(segul,LOW);
    digitalWrite(segur,HIGH);
    digitalWrite(segmdl,LOW);
    digitalWrite(segdwn,LOW);
    digitalWrite(segdl,LOW);
    digitalWrite(segdr,HIGH);
    while(digitalRead(btnrst));
    }
    
    if(b2state==0)
    {
    flag = 0;
    digitalWrite (ledrst,LOW);
    Alarm();
    digitalWrite(segup,HIGH);
    digitalWrite(segul,LOW);
    digitalWrite(segur,HIGH);
    digitalWrite(segmdl,HIGH);
    digitalWrite(segdwn,HIGH);
    digitalWrite(segdl,HIGH);
    digitalWrite(segdr,LOW);
    while(digitalRead(btnrst));
    }
    
    if(b3state==0)
    {
    flag = 0;
    digitalWrite (ledrst,LOW);
    Alarm();
    digitalWrite(segup,HIGH);
    digitalWrite(segul,LOW);
    digitalWrite(segur,HIGH);
    digitalWrite(segmdl,HIGH);
    digitalWrite(segdwn,HIGH);
    digitalWrite(segdl,LOW);
    digitalWrite(segdr,HIGH);
    while(digitalRead(btnrst));
    }

    if(b4state==0)
    {
    flag = 0;
    digitalWrite (ledrst,LOW);
    Alarm();
    digitalWrite(segup,LOW);
    digitalWrite(segul,HIGH);
    digitalWrite(segur,HIGH);
    digitalWrite(segmdl,HIGH);
    digitalWrite(segdwn,LOW);
    digitalWrite(segdl,LOW);
    digitalWrite(segdr,HIGH);
    while(digitalRead(btnrst));
    }

    if(b5state==0)
    {
    flag = 0;
    digitalWrite (ledrst,LOW);
    Alarm();
    digitalWrite(segup,HIGH);
    digitalWrite(segul,HIGH);
    digitalWrite(segur,LOW);
    digitalWrite(segmdl,HIGH);
    digitalWrite(segdwn,HIGH);
    digitalWrite(segdl,LOW);
    digitalWrite(segdr,HIGH);
    while(digitalRead(btnrst));
    }
  }
}

void Alarm()
{
  for(int i=0; i<100; i++)
  {
    digitalWrite(bzr,HIGH);
    delay(2);
    digitalWrite(bzr,LOW);
    delay(2);
  }
}
