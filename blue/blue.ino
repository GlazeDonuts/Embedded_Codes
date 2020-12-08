#include "BluetoothSerial.h"
BluetoothSerial BT;
char val;    

void setup() 
{
BT.begin("Khurshed_ESP");  
pinMode(2, OUTPUT);    
}

void loop()
{
  val = BT.read();         //read command sent via bluetooth
  if (val == '1')         // LED ON
  {
    digitalWrite(2, HIGH);
  }
  if (val == '0')        // LED OFF
  {
    digitalWrite(2, LOW);
  }
 
}
