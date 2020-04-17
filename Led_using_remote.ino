#include <IRremote.h>

//Define Pins

int led = 2;

int f=0;

int RECV_PIN = 3;

//IR Library stuff

IRrecv irrecv(RECV_PIN);

decode_results results;

void setup()

{

  //Set Led Pins

  pinMode(led, OUTPUT);

  

  

  //Enable serial usage and IR signal in

  Serial.begin(9600);

  Serial.println("Enabling IRin");

  irrecv.enableIRIn(); 

  Serial.println("Enabled IRin");

}

void loop() {

  if (irrecv.decode(&results)) {//irrecv.decode(&results) returns true if anything is recieved, and stores info in varible results

    unsigned int value = results.value; //Get the value of results as an unsigned int, so we can use switch case

    Serial.println(value);

    if(value==255)

    {

    if(f==0)

    {

      digitalWrite(led,HIGH);

      f=1;

    }

    else

    {

      digitalWrite(led,LOW);

      f=0;

    }

    }

    irrecv.resume(); // Receive the next value

  }

}
