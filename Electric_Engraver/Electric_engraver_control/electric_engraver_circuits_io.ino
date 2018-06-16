//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Electric engraver
// 
// Made by Aleksey Konoiko
// License: CC-BY-SA 3.0
// Downloaded from: https://circuits.io/circuits/3064845-electric-engraver

int sensorPin = 2;    // select the input pin for the potentiometerint sensorValue = 0;  // variable to store the value coming from the sensorint pedalPin = 1;int pedalValue = 0;// Solenoidint ForwardPinA = 4;int ReversePinA = 2;int PWM_PinA = 9; // Needs to be a PWM pin to be able to control solenoid void setup() {  Serial.begin(9600);//Define L298N Dual H-Bridge Motor Controller PinspinMode(ForwardPinA,OUTPUT);pinMode(ReversePinA,OUTPUT);pinMode(PWM_PinA,OUTPUT);}void loop() {  sensorValue = (analogRead(sensorPin))/4;  pedalValue =  (analogRead(pedalPin))*5;   int intesity =map(sensorValue, 0, 255, 50, 255);  Serial.print ("Intesity: ");  Serial.println(intesity);  Serial.print ("pedalValue: ");  Serial.println(pedalValue);  for (int i=1; i <= sensorValue; i=i+3){ //// Motor 1 ForwardanalogWrite(PWM_PinA, i); //Sets speed variable via PWM /digitalWrite(ForwardPinA, LOW);	digitalWrite(ForwardPinA, LOW);    digitalWrite(ReversePinA, HIGH);    delayMicroseconds(500+pedalValue); }//analogWrite(PWM_PinA, intesity); //Sets speed variable via PWM //digitalWrite(ForwardPinA, LOW);//digitalWrite(ReversePinA, HIGH);//delay(15+pedalValue); int var = map(sensorValue, 1, 255, 40, 1);  Serial.print ("Var: ");  Serial.println(var);// Motor 1 Stop (Freespin)analogWrite(PWM_PinA, 0);digitalWrite(ForwardPinA, LOW);digitalWrite(ReversePinA, HIGH);//delay(pedalValue+var);//delay(pedalValue+5);for (int x=1; x <= sensorValue; x=x+3){//// Motor 1 ReverseanalogWrite(PWM_PinA, x);digitalWrite(ForwardPinA, HIGH);digitalWrite(ReversePinA, LOW);  delayMicroseconds(500+pedalValue); }//analogWrite(PWM_PinA, intesity);//digitalWrite(ForwardPinA, HIGH);//digitalWrite(ReversePinA, LOW);//delay(15+pedalValue); }  
