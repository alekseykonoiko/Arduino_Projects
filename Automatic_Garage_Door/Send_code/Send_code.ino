

#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"

// Set up nRF24L01 radio on SPI bus plus pins 9 & 10 

RF24 radio(9,10); //CE, CSN
// Radio pipe addresses for the 2 nodes to communicate.
const uint64_t pipe = 0xF0F0F0F0E1LL;

void setup()
{
  Serial.begin(9600);
  radio.begin();
  delay(2);
  radio.setChannel(9); // (0-127)
  radio.setDataRate(RF24_250KBPS);
  radio.setPALevel(RF24_PA_MAX);
  radio.openWritingPipe(pipe);
  }
void loop(void)
{
 int data = 555;
 radio.write(&data, sizeof(data));
 Serial.print("data: ");
 Serial.println(data);
}

