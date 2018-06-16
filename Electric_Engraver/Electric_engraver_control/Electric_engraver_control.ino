
int sensorPin = 2;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int pedalPin = 1;
int pedalValue = 0;
// Motor 1
int ForwardPinA = 3;
int ReversePinA = 2;
int PWM_PinA = 9; // Needs to be a PWM pin to be able to control motor speed

// Motor 2
int ForwardPinB = 4;
int ReversePinB = 5;
int PWM_PinB = 10; // Needs to be a PWM pin to be able to control motor speed

void setup() {  // Setup runs once per reset
// initialize serial communication @ 9600 baud:
Serial.begin(9600);

//Define L298N Dual H-Bridge Motor Controller Pins

pinMode(ForwardPinA,OUTPUT);
pinMode(ReversePinA,OUTPUT);
pinMode(PWM_PinA,OUTPUT);
//pinMode(ForwardPinB,OUTPUT);
//pinMode(ReversePinB,OUTPUT);
//pinMode(PWM_PinB,OUTPUT);

}

void loop() {
  sensorValue = (analogRead(sensorPin))/4;
  pedalValue =  (analogRead(pedalPin))/10;
 
  int intesity =map(sensorValue, 0, 255, 50, 255);
  Serial.print ("Intesity: ");
  Serial.println(intesity);
  Serial.print ("pedalValue: ");
  Serial.println(pedalValue);
//  for (int i=0; i <= sensorValue; i=i+5){ 
//// Motor 1 Forward
//analogWrite(PWM_PinA, i); //Sets speed variable via PWM 
//digitalWrite(ForwardPinA, LOW);
//digitalWrite(ReversePinA, HIGH);
//delayMicroseconds(500); }


analogWrite(PWM_PinA, intesity); //Sets speed variable via PWM 
digitalWrite(ForwardPinA, LOW);
digitalWrite(ReversePinA, HIGH);
delayMicroseconds(15000); 


int var = map(sensorValue, 1, 255, 40, 1);
  Serial.print ("Var: ");
  Serial.println(var);
// Motor 1 Stop (Freespin)
analogWrite(PWM_PinA, 0);
digitalWrite(ForwardPinA, LOW);
digitalWrite(ReversePinA, HIGH);
//delay(pedalValue+var);
delay(pedalValue+5);

//for (int x=0; x <= sensorValue; x=x+5){
//// Motor 1 Reverse
//analogWrite(PWM_PinA, x);
//digitalWrite(ForwardPinA, HIGH);
//digitalWrite(ReversePinA, LOW);
//delayMicroseconds(500); 
//}


analogWrite(PWM_PinA, intesity);
digitalWrite(ForwardPinA, HIGH);
digitalWrite(ReversePinA, LOW);
delayMicroseconds(15000); 


////______________Motor 2______________
//
//// Motor 2 Forward
//analogWrite(PWM_PinB, 255);
//digitalWrite(ForwardPinB, HIGH);
//digitalWrite(ReversePinB, LOW);
//
//
//// Motor 2 Stop (Freespin)
//analogWrite(PWM_PinB, 0);
//digitalWrite(ForwardPinB, HIGH);
//digitalWrite(ReversePinB, LOW);
//
//analogWrite(PWM_PinB, 255);
//digitalWrite(ForwardPinB, LOW);
//digitalWrite(ReversePinB, HIGH);

}
  
