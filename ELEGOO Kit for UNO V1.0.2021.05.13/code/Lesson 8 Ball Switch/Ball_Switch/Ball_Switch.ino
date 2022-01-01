//www.elegoo.com
//2016.12.08
/*****************************************/

//Adding an extra LED which will be turned on when no tilt is detected
const int redledPin = 13;//the red led attach to
const int greenledPin = 12;//the green led attach to
const int ballswitchPin = 2; //the pin tilt ball switch is connected to

void setup()
{ 
  pinMode(redledPin,OUTPUT); //initialize the ledPin as an output
  pinMode(greenledPin,OUTPUT); //initialize the ledPin as an output
  pinMode(ballswitchPin,INPUT);
  digitalWrite(ballswitchPin, HIGH);
} 
/******************************************/
void loop() 
{  
  int digitalVal = digitalRead(2);
  if(HIGH == digitalVal)
  {
    digitalWrite(redledPin,HIGH);//turn the red led on
    digitalWrite(greenledPin,LOW);//turn the green led off

  }
  else
  {
    digitalWrite(redledPin,LOW);//turn the led off
    digitalWrite(greenledPin,HIGH);//turn the green led ON
  }
}
/**********************************************/

