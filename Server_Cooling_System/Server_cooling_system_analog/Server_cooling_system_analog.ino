int tempPinA = 2;
int tempPinB = 3;
 int pwm = 5;
 int fanSpeed = 0;
 int serverTempA = 0;
 int serverTempB = 0;
void setup()
{
  // start serial port
  Serial.begin(9600);
  pinMode(pwm,OUTPUT) ; 
}
 
 
void loop()
{
 serverTempA = (analogRead(tempPinA)-838-53);    // read the input pin
 serverTempB = (analogRead(tempPinB)-838-53);
 Serial.print("Server temperatureis A: ");
  Serial.println(serverTempA);
  Serial.print("Server temperature is B: ");
  Serial.println(serverTempB);
  serverTempA = constrain(serverTempA, 40, 70);
   serverTempB = constrain(serverTempB, 40, 70);
   if (serverTempA > serverTempB)
   {
  fanSpeed = map(serverTempA, 40, 70, 255, 0);
  fanSpeed = constrain(fanSpeed, 0, 255);
  Serial.print("Fan speed is: ");
  Serial.println(fanSpeed);
  analogWrite(pwm,fanSpeed);
  }
  else
  {
   fanSpeed = map(serverTempB, 40, 70, 255, 0);
  fanSpeed = constrain(fanSpeed, 0, 255);
  Serial.print("Fan speed is: ");
  Serial.println(fanSpeed);
  analogWrite(pwm,fanSpeed); 
  }  
  delay(500);
}

