#include <LedControl.h>

LedControl matrix = LedControl(12,11,10,1);

void setup()
{
  matrix.shutdown(0,false);
}
void loop()
{
int humidite= analogRead(0);
Serial.begin(9600);
Serial.println(humidite);

if(humidite<10)
{
 matrix.setLed(0,0,7,true);
 matrix.setLed(0,0,6,true);
 matrix.setLed(0,1,7,true);
 matrix.setLed(0,1,6,true);

 matrix.setLed(0,6,6,true);
 matrix.setLed(0,6,7,true);
 matrix.setLed(0,7,6,true);
 matrix.setLed(0,7,7,true);

 matrix.setLed(0,3,3,true);
 matrix.setLed(0,3,4,true);
 matrix.setLed(0,3,2,true);
 matrix.setLed(0,4,3,true);
 matrix.setLed(0,4,4,true);
 matrix.setLed(0,4,2,true);
 }
 
}


