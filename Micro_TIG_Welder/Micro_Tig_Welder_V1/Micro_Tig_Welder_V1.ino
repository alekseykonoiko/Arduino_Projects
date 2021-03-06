#include <U8glib.h>

U8GLIB_ST7920_128X64_1X u8g(13, 11, 12);	// SPI Com: SCK = en = 18, MOSI = rw = 16, CS = di = 17

#define u8g_logo_width 94
#define u8g_logo_height 64
//static unsigned char u8g_logo_bits[] = {
static unsigned char u8g_logo_bits[] U8G_PROGMEM = {
0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xe0, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfc, 0x3f, 0xe0, 0x03, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0x33, 0xe0, 0x03, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x9f, 0xff, 0xbf, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x9f, 0xdf, 0xbf, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x9f, 0x7b, 0xbb, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x9f, 0x7d, 0xb7, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x9f, 0x03, 0xb8, 0x0f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0xbf, 0x02, 0xd0, 0x1f, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x7f, 0xbf, 0xff, 0xdf, 0xff, 0x0f, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0xc0, 0x7f, 0x7f, 0x00, 0xc0, 0xff, 0x3f, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0xe0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0xf8, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xff, 0x03, 0x00, 0xc0, 
0x00, 0x00, 0xfe, 0xff, 0xbf, 0xff, 0xff, 0xdf, 0xff, 0x07, 0x00, 0xc0, 
0x00, 0x00, 0xfe, 0xff, 0xff, 0xff, 0xde, 0xdb, 0xff, 0x1f, 0x00, 0xc0, 
0x00, 0x80, 0xff, 0xef, 0x7f, 0xfd, 0xfe, 0xdb, 0xff, 0x3f, 0x00, 0xc0, 
0x00, 0xe0, 0xff, 0xdf, 0x7f, 0xf6, 0xfe, 0xdb, 0xff, 0x7f, 0x00, 0xc0, 
0x00, 0xf0, 0xff, 0xbd, 0xff, 0xf2, 0xbe, 0xf9, 0xef, 0xff, 0x01, 0xc0, 
0x00, 0xfc, 0xff, 0x3b, 0xff, 0xac, 0xb6, 0xfc, 0xf7, 0xff, 0x07, 0xc0, 
0x00, 0xff, 0xff, 0x77, 0xd6, 0x48, 0x94, 0xf4, 0xf9, 0xff, 0x0f, 0xc0, 
0xc0, 0xff, 0xff, 0x6f, 0xac, 0x41, 0x54, 0xfc, 0xbc, 0xff, 0x7f, 0xc0, 
0xf0, 0xff, 0xff, 0xff, 0x48, 0x01, 0x40, 0x3c, 0xde, 0xff, 0xff, 0xc1, 
0xf8, 0xff, 0x7f, 0xff, 0x11, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0xc3, 
0xfc, 0xff, 0xff, 0xdf, 0x01, 0x00, 0x00, 0x80, 0xfd, 0xff, 0xff, 0xc7, 
0xfc, 0xff, 0xff, 0xbf, 0x03, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xcf, 
0xfe, 0xff, 0xff, 0x5f, 0x02, 0x00, 0x00, 0xc0, 0xff, 0xfe, 0xff, 0xdf, 
0xfe, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0xe0, 0x30, 0xff, 0xff, 0xdf, 
0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 
0xfe, 0xff, 0xff, 0x3f, 0x00, 0x00, 0x00, 0xc0, 0x0f, 0xc0, 0xff, 0xff, 
0xfc, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 
0xf8, 0xff, 0x0f, 0x78, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 
0xf8, 0xff, 0xff, 0x3b, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xdf, 
0xf0, 0xff, 0xff, 0x0d, 0x01, 0x00, 0x00, 0x00, 0x4e, 0xfe, 0xff, 0xcf, 
0xe0, 0xff, 0xff, 0xfb, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xff, 0xff, 0xc7, 
0x00, 0xff, 0xff, 0x2f, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xc1, 
0x00, 0xf8, 0xff, 0x1d, 0x06, 0x00, 0x00, 0xe0, 0xf3, 0xff, 0xff, 0xc0, 
0x00, 0xc0, 0xff, 0x87, 0x63, 0x00, 0x00, 0x00, 0xfe, 0xff, 0x1f, 0xc0, 
0x00, 0x00, 0xfe, 0xf3, 0x31, 0x00, 0x00, 0xf8, 0xff, 0xff, 0x07, 0xc0, 
0x00, 0x00, 0xf0, 0xfc, 0x1c, 0x04, 0x00, 0xb0, 0xff, 0x7f, 0x00, 0xc0, 
0x00, 0xc0, 0xff, 0x7f, 0x1e, 0x82, 0x06, 0xef, 0xff, 0xff, 0x00, 0xc0, 
0x80, 0xff, 0xff, 0xbf, 0x8f, 0x83, 0x6e, 0xfe, 0xff, 0xff, 0xff, 0xc3, 
0x80, 0xff, 0xff, 0xff, 0x0f, 0x5b, 0x83, 0x02, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x10, 0x20, 0x10, 0x41, 0x06, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x04, 0x10, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x04, 0x20, 0x80, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 
};

int divVoltagePin = A0;    // select the input pin for the potentiometer
int divVoltageValue = 0;  // variable to store the value coming from the sensor

int pot1 = A1;    // select the input pin for the potentiometer for pulse 1
int pot2 = A2;    // select the input pin for the potentiometer for the dwell
int pot3 = A3;    // select the input pin for the potentiometer for pulse 2

int pulse1Value = 0;  // variable to hold the potentiometer value
int dwellValue = 0;  // variable to hold the potentiometer value
int pulse2Value = 0;  // variable to hold the potentiometer value

const int buttonPin = 4;     // the number of the pushbutton pin
const int buzz = 5;
int comp = 2;
int comp_state;
int solenoid = 3;

const int numReadings = 10;  // use this value to determine the size of the readings array.
int voltageReadings[numReadings];      // the readings from the analog input
int voltageReadIndex = 0;              // the index of the current reading
float voltageTotal = 0;                  // the running total
float voltageAverage = 0.0;            // the average
float voltageAverageOld = 0.0;          // the old voltage average reading

boolean voltageSteady = false;    //boolean to monitor whether the voltage is fluctuating - a weld can only be performed when the voltage is stable

const int gatePin = 6; // the number of the gate trigger pulse

int weldComplete = 1;
int buttonState = 0;         // variable for reading the pushbutton status

char* statusText[2] = {"Stabalising volts", "*Ready to weld*"};  // text for the screen to indicate readiness for welding
int  statusTextNum = 0;



void draw(void) {
  // graphic commands to redraw the complete screen should be placed here  

  u8g.setPrintPos(0, 10); 
  u8g.print("Pulse 1 ="); 
  u8g.setPrintPos(80, 10); 
  u8g.print(pulse1Value);
  u8g.setPrintPos(0, 23); 
  u8g.print("Dwell   = "); 
  u8g.setPrintPos(80, 23); 
  u8g.print(dwellValue/10.0);
  u8g.setPrintPos(0, 36); 
  u8g.print("Pulse 2 ="); 
  u8g.setPrintPos(80, 36); 
  u8g.print(pulse2Value);
  u8g.setPrintPos(0, 49);
  u8g.print("Cap Volts ="); 
  u8g.setPrintPos(90, 49);
  float voltage = voltageAverage * (5.0/1023.0) * 3.0 +.05; // Calculate the voltage across the divider, the +0.05 is the difference between my reading on a DMM and the arduino - not a bad corralation
  u8g.print(voltage);
  u8g.setPrintPos(0, 62);
  u8g.print(statusText[statusTextNum]);
}

void setup(void) {

  Serial.begin(115200);
  // flip screen, if required
  // u8g.setRot180();

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(gatePin, OUTPUT);
  pinMode(solenoid, OUTPUT);
  pinMode(buzz, OUTPUT);
  pinMode(comp, INPUT);
    u8g.firstPage();
  do { 
  u8g.drawXBMP( 15, 11, u8g_logo_width, u8g_logo_height, u8g_logo_bits);
  u8g.setFont(u8g_font_unifont);
  //u8g.setFont(u8g_font_osb21);
  u8g.drawStr( 0, 10, "Aleksey CD Welder");
   } while( u8g.nextPage() );

  delay (2000);
    // initialize all the readings to 0:
  for (int thisReading = 0; thisReading < numReadings; thisReading++) {
    voltageReadings[thisReading] = 0;
  }
  
}

void weldschedule() {

  digitalWrite(gatePin, HIGH);
  delay (pulse1Value);
  digitalWrite(gatePin, LOW);
  delay (dwellValue/10);
  digitalWrite(gatePin, HIGH);
  delay (pulse2Value);
  digitalWrite(gatePin, LOW);
  weldComplete = 1;
  digitalWrite(buzz, HIGH);
  delay (200);
  digitalWrite(buzz, LOW);
  
}

void loop(void) {
  
  // picture loop
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
  
  pulse1Value = analogRead(pot1);
  dwellValue = analogRead(pot2);
  pulse2Value = analogRead(pot3);
  comp_state = digitalRead(comp);
 // if (comp_state == LOW)
    // {
//       delay(2000);
//       digitalWrite(solenoid, HIGH);
//       while(comp_state == LOW)
//       {
//        
//       }
        if(comp_state == HIGH && weldComplete == 0 && voltageSteady == true)
        {
        weldschedule();
        delay(50);
        }
       
       digitalWrite(solenoid, HIGH);
       delay(500);
       digitalWrite(solenoid, LOW);
     //}
      
  // read the voltage from the voltage divider
  // subtract the last reading:
  voltageTotal = voltageTotal - voltageReadings[voltageReadIndex];
  // read from the sensor:
  voltageReadings[voltageReadIndex] = analogRead(divVoltagePin);
  // add the reading to the total:
  voltageTotal = voltageTotal + voltageReadings[voltageReadIndex];
  // advance to the next position in the array:
  voltageReadIndex = voltageReadIndex + 1;

  // if we're at the end of the array...
  if (voltageReadIndex >= numReadings) {
    // ...wrap around to the beginning:
    voltageReadIndex = 0;
  }

  // calculate the average:
  voltageAverage = voltageTotal / numReadings;
  float voltageDiff = voltageAverageOld - voltageAverage;
  Serial.println (voltageDiff);
  Serial.println ("");
  if (voltageDiff <= 0.5 && voltageDiff >= -0.5 && weldComplete == 1) {
  weldComplete = 0; 
  voltageSteady = true;
  for (int i= 1 ;i < 4; i ++){
    tone(5, 3000);
    delay(50);
    noTone(5);
    delay(50);
    statusTextNum = 1;
   }
 }
 
 if (voltageDiff >= 0.5 || voltageDiff <= -0.5){

  voltageSteady = false;
  weldComplete = 1;
  statusTextNum = 0;
 }
  Serial.println(voltageAverageOld);
  Serial.println(voltageAverage);
  voltageAverageOld = voltageAverage;
  pulse1Value = map(pulse1Value, 0 , 1023, 0, 1000);      // re-map pot 1 to 0 - XX pulse length
  dwellValue = map(dwellValue, 0 , 1023, 0, 200);      // re-map pot 1 to 0 - XX pulse length
  pulse2Value = map(pulse2Value, 0 , 1023, 0, 1000);      // re-map pot 1 to 0 - XX pulse length

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  //Serial.println(buttonState);
  //Serial.println(weldComplete);
  //Serial.println(voltageSteady);
  //Serial.println("");
  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  
  if (buttonState == LOW && weldComplete == 0 && voltageSteady == true) {
  // complete a weld:
  //  Serial.println("Do a weld now!");
    weldschedule();
  }
    delay(10);        // delay in between reads for stability
}


