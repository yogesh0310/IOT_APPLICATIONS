int echo=6;

int trig=7;

int led=5;

void setup()

{

  Serial.begin(9600);

  pinMode(echo,INPUT);

  pinMode(trig,OUTPUT);

  pinMode(led,OUTPUT);

  pinMode(A0,INPUT);

}

void loop()

{

  digitalWrite(trig,LOW);

  delayMicroseconds(200);

  digitalWrite(trig,HIGH);

  delayMicroseconds(400);

  

 

  int duration=pulseIn(echo,HIGH);

  float dm=(duration/2)*340;

  Serial.println(dm);

  

  float tmp=analogRead(A0);

  float voltage = (tmp * 5.0)/1024;

  float milliVolt = voltage * 1000;

 float tmpCel =  (milliVolt-500)/10 ;

  Serial.println(tmpCel);

  

  if(tmpCel>50 || dm<=25316)

  {

    digitalWrite(led,HIGH);

  }

  

  

}
