#include<SoftwareSerial.h>
SoftwareSerial gsm(2,3);

void setup()
{
  delay(10000);
  Serial.begin(9600);
  gsm.begin(9600);
  gsm.println("AT+CMGF=1");
  delay(1000);
  gsm.println("AT+CMGS=\"+919146657495\"\r"); //replace x by your number
  delay(1000);
  gsm.println("Dustbin is full by Yogesh");
  delay(100);
  gsm.println((char)26);
  delay(1000);
}
void loop()
{
  
}
