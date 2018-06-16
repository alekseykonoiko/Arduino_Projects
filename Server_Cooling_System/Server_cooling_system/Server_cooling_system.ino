#include <OneWire.h>
#include <DallasTemperature.h>
 float serverTemp = 0;
 const int pwm = 3;
 int fanSpeed = 0;
// Data wire is plugged into pin 2 on the Arduino
#define ONE_WIRE_BUS 2
 
// Setup a oneWire instance to communicate with any OneWire devices 
// (not just Maxim/Dallas temperature ICs)
OneWire oneWire(ONE_WIRE_BUS);
 
// Pass our oneWire reference to Dallas Temperature.
DallasTemperature sensors(&oneWire);
 
void setup()
{
  // start serial port
  Serial.begin(9600);
  Serial.println("Dallas Temperature IC Control Library Demo");

  // Start up the library
  sensors.begin();
  pinMode(pwm,OUTPUT) ; 
}
 
 
void loop()
{
  // call sensors.requestTemperatures() to issue a global temperature
  // request to all devices on the bus
  Serial.print(" Requesting temperatures...");
  sensors.requestTemperatures(); // Send the command to get temperatures
  Serial.println("DONE");

  Serial.print("Temperature is: ");
  serverTemp = sensors.getTempCByIndex(0);
  Serial.println(serverTemp);
   serverTemp = constrain(serverTemp, 40, 60);
  fanSpeed = map(serverTemp, 40, 60, 0, 255);
  Serial.print("Fan speed is: ");
  Serial.println(fanSpeed);
  analogWrite(pwm,fanSpeed); 
delay(50) ;
  
   
 
}

