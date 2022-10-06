//Varad Deshpande
void setup() {
 pinMode(A0,INPUT);
 pinMode(8,OUTPUT);
 Serial.begin(9600);

}

void loop() {
long count;
while(count<100000)
{
float read1=0;
float tot=0,avg=0;
float final1=0;
float min1=0;
  for(int a=0;a<=5;a++)
  {
    read1=analogRead(A0);
    tot=tot+read1;
    delay(1);
  }
avg=tot/5; 
Serial.print("avg:");
Serial.println(avg);
final1=map(avg,0,1023,1,20);
final1=constrain(final1,1,20);
Serial.print("final1:");
Serial.println(final1);

if(final1<7)
{

 if(final1>3)
{
min1=final1-1.7;
}
else if(final1<=3 && final1>1)
{
  min1=final1-0.5;
}
else if(final1==1.0)
{
  min1=final1;
}
Serial.print("min1:");
Serial.println(min1);
  
while(map(analogRead(A0),0,1023,1,20)>min1)
{
  digitalWrite(8,LOW);
  delay(50);
}
digitalWrite(8,HIGH);
delay(500);
digitalWrite(8,LOW);
delay(1300);
}


else if(final1>6)
{
  min1=read1-70;
  while(analogRead(A0)>min1)
 {
 digitalWrite(8,LOW);
 }

 digitalWrite(8,HIGH);
 delay(500);
 digitalWrite(8,LOW);
 delay(1300);
}
count++;
Serial.print("Counter:");
Serial.println(count); 
}

}


