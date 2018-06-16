int sensorPin = 2;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int pedalPin = 1;
int pedalValue = 0;
// Motor 1
int ForwardPinA = 3;
int ReversePinA = 2;
int PWM_PinA = 9; // Needs to be a PWM pin to be able to control motor speed
void setup() {  // Setup runs once per reset
// initialize serial communication @ 9600 baud:
Serial.begin(9600);

//Define L298N Dual H-Bridge Motor Controller Pins

pinMode(ForwardPinA,OUTPUT);
pinMode(ReversePinA,OUTPUT);
pinMode(PWM_PinA,OUTPUT);}


void loop() {
  sensorValue = (analogRead(sensorPin))/4;
  pedalValue =  (analogRead(pedalPin))/10;
 
  int intesity =map(sensorValue, 0, 255, 50, 255);
  Serial.print ("Intesity: ");
  Serial.println(intesity);
  Serial.print ("pedalValue: ");
  Serial.println(pedalValue);
analogWrite(PWM_PinA, intesity); //Sets speed variable via PWM 
digitalWrite(ForwardPinA, LOW);
digitalWrite(ReversePinA, HIGH);
delay(1);

for (int x=0; x <= sensorValue; x=x+1){

analogWrite(PWM_PinA, intesity); //Sets speed variable via PWM 
digitalWrite(ForwardPinA, LOW);
digitalWrite(ReversePinA, HIGH);
delayMicroseconds(100); 
analogWrite(PWM_PinA, intesity);
digitalWrite(ForwardPinA, HIGH);
digitalWrite(ReversePinA, LOW);
delayMicroseconds(100);}
}
