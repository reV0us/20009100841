int pinInterrupt=2;
int tick = 0; 
int state=0;
void myfunc()
{
  tick=-1;
  Serial.println(tick);
}
 
void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);

  Serial.begin(9600); 
  pinMode(13,OUTPUT);
  
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
}
 
byte income1=0;
byte income2=0;

void loop()
{
  
  Serial.println(tick++);
  if(tick==100) tick=0;
    
  income2=tick%10-'0';
  income1=tick/10-'0';
  
  digitalWrite(9,LOW);
  digitalWrite(3,income1&0x1);
  digitalWrite(4,(income1>>1)&0x1);
  digitalWrite(5,(income1>>2)&0x1);
  digitalWrite(6,(income1>>3)&0x1);
  digitalWrite(9,HIGH);
  
  digitalWrite(10,LOW);
  digitalWrite(3,income2&0x1);
  digitalWrite(4,(income2>>1)&0x1);
  digitalWrite(5,(income2>>2)&0x1);
  digitalWrite(6,(income2>>3)&0x1);
  digitalWrite(10,HIGH);
    
  state=~state;
  digitalWrite(13,state);
  delay(1000);
  
}
