
#include "MQ135.h"

#define co2 27 

void setup(){  
Serial.begin(9600);                            
 }
void loop(){

MQ135 mqco2(co2);

Serial.print(mqco2.getPPM());

                 
}
