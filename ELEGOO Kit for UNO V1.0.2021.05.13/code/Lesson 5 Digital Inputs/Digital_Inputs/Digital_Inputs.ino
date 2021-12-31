//www.elegoo.com
//2016.12.08

int redledPin = 5;
int greenledPin = 6;
int buttonApin = 9;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  pinMode(redledPin, OUTPUT);
  pinMode(greenledPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(redledPin, HIGH);
    digitalWrite(greenledPin, LOW);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(redledPin, LOW);
    digitalWrite(greenledPin, HIGH);
  }
}
