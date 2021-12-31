//www.elegoo.com
//2016.12.8

// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

// define variables
int redValue;
int greenValue;
int blueValue;

// main loop
void loop()
{
#define delayTime 200 // fading time between colors
#define delayDot 200
#define delayDash 1000

for(int i = 0; i <3; i += 1)
{
  redValue = 255;
  analogWrite(RED, redValue);
  delay(delayDot);
  
  redValue = 0;
  greenValue = 0;
  blueValue = 0;
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}

for(int i = 0; i <3; i += 1)
{
  greenValue = 255;
  analogWrite(GREEN, greenValue);
  delay(delayDash);
  
  redValue = 0;
  greenValue = 0;
  blueValue = 0;
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}

for(int i = 0; i <3; i += 1)
{
  blueValue = 255;
  analogWrite(BLUE, blueValue);
  delay(delayDot);
  
  redValue = 0;
  greenValue = 0;
  blueValue = 0;
  analogWrite(RED, redValue);
  analogWrite(GREEN, greenValue);
  analogWrite(BLUE, blueValue);
  delay(delayTime);
}

//for(int i = 0; i < 255; i += 1) // fades out red bring green full when i=255
//{
//redValue -= 1;
//greenValue += 1;
//analogWrite(RED, redValue);
//analogWrite(GREEN, greenValue);
//delay(delayTime);
//}

//for(int i = 0; i < 255; i += 1) // fades out green bring blue full when i=255
//{
//greenValue -= 1;
//blueValue += 1;
//analogWrite(GREEN, greenValue);
//analogWrite(BLUE, blueValue);
//delay(delayTime);
//}

//for(int i = 0; i < 255; i += 1) // fades out blue bring red full when i=255
//{
//// The following code has been rearranged to match the other two similar sections
//blueValue -= 1;
//redValue += 1;
//analogWrite(BLUE, blueValue);
//analogWrite(RED, redValue);
//delay(delayTime);
//}

analogWrite(BLUE, 0);
delay(500);

}
