//www.elegoo.com
//2016.12.08
/*****************************************/
const int ledPin = 13;//the led attach to
const int ballSwitchPin = 2; //the pin tilt ball switch is connected to

void setup()
{ 
  pinMode(ledPin,OUTPUT); //initialize the ledPin as an output
  pinMode(ballSwitchPin,INPUT);
  digitalWrite(ballSwitchPin, HIGH);
} 
/******************************************/
void loop() 
{  
  int digitalVal = digitalRead(2);
  if(HIGH == digitalVal)
  {
    digitalWrite(ledPin,LOW);//turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn the led on 
  }
}
/**********************************************/

