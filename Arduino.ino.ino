/* Encoder Library - Basic Example
 * http://www.pjrc.com/teensy/td_libs_Encoder.html
 *
 * This example code is in the public domain.
 */

#include <Encoder.h>

// Change these two numbers to the pins connected to your encoder.
//   Best Performance: both pins have interrupt capability
//   Good Performance: only the first pin has interrupt capability
//   Low Performance:  neither pin has interrupt capability
Encoder myEnc(2, 3);
//   avoid using pins with LEDs attached
char inChar;


void setup() {
  Serial.begin(9600);
}

long oldPosition  = -999;

void loop() {  
  if (Serial.available() > 0) {
    inChar = Serial.read();
    if (inChar == 'g'){
        long newPosition = myEnc.read();
        Serial.println(newPosition);
        }


  }
  

}
