#include <HCSR04.h>

HCSR04 hc(13,12);//initialisation class HCSR04 (trig pin , echo pin)

void setup()
{ Serial.begin(9600); }

void loop()
{ Serial.println( hc.dist() ); }//return curent distance in serial
