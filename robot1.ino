void setup() {
 pinMode(A0,INPUT);
 pinMode(A5,INPUT);
 pinMode(9,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);

}

void loop() {
float read1=0;
float tot=0,avg=0;
float final1=0;
float min1=0;
int speed1=255;

  for(int a=0;a<=5;a++)
  {
    read1=analogRead(A4);
    tot=tot+read1;
    delay(1);
  }
avg=tot/5; 

final1=map(avg,0,1023,1,20);
delay(1);
final1=constrain(final1,1,20);
delay(10);


if(final1>3)
{
min1=final1-1.5;
}
else if(final1<=3 && final1>1)
{
  min1=final1-0.4;
}
else if(final1==1.0)
{
  min1=final1;
}

delay(50);
  
while(map(analogRead(A4),0,1023,1,20)>min1)
{
  analogWrite(11,speed1);
  digitalWrite(10,LOW);
  digitalWrite(9,HIGH);
  delay(50); 
}

  analogWrite(11,speed1);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW);

delay(1000);
  
read1=0;
tot=0,avg=0;
final1=0;
min1=0;
 
  for(int a=0;a<=5;a++)
  {
    read1=analogRead(A1);
    tot=tot+read1;
    delay(1);
  }
avg=tot/5; 

final1=map(avg,0,1023,1,20);
final1=constrain(final1,1,20);
delay(10);




if(final1>3)
{
min1=final1-1.5;
}
else if(final1<=3 && final1>1)
{
  min1=final1-0.4;
}
else if(final1==1.0)
{
  min1=final1;
}

delay(50);

 
while(map(analogRead(A1),0,1023,1,20)>min1)
{
  analogWrite(11,speed1);
  digitalWrite(10,HIGH);
  digitalWrite(9,LOW); 
  delay(50);
}

delay(1000);
  
}





