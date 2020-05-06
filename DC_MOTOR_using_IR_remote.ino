#include <Keypad.h>

int d=11;

const byte row=4;

const byte col=4;

char keymap[row][col]=

{

  

    {'1','2','3','A'},

    {'4','5','6','B'},

    {'7','8','9','C'},

    {'*','0','#','D'}

  

};

byte rowPins[row]={9,8,7,6};

byte colPins[col]={5,4,3,2};

Keypad myKey=Keypad(makeKeymap(keymap),rowPins,colPins,row,col);

void setup()

{

 Serial.begin(9600); 

  pinMode(d,OUTPUT);

}

void loop()

{

  char keypressed=myKey.getKey();

  if(keypressed!=NO_KEY)

  {

    Serial.println(keypressed);

    if(keypressed=='1')

    {

      analogWrite(d,100);

    }

    else if(keypressed=='2')

    {

      analogWrite(d,200);

    }

    else if(keypressed=='3')

    {

      analogWrite(d,300);

    }

    else if(keypressed=='4')

    {

      analogWrite(d,400);

    }

  }

}
