// transmitter
#include <SoftwareSerial.h>
SoftwareSerial loraSerial(2, 3);  // TX, RX
void setup() 
{
   Serial.begin(2000);
   loraSerial.begin(9600);
}

void loop() 
{
  loraSerial.print("on");
  delay(2000);
  loraSerial.print("off");
  delay(2000);
}
