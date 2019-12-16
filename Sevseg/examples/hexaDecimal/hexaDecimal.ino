#include "Sevseg.h"

Sevseg sevseg(12,11,10,9,8,7,6); // these are pin a to g in seven segment
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=9;i++){
    sevseg.number(char(i+48)); //number 1 to 9 in ASCII
    delay(500);
  }
  for(int i=0;i<6;i++){
    sevseg.number(char(i+65)); //char A to F in ASCII
    delay(500);
  }
  sevseg.clear(); //Make seven segment off
  delay(500);
}
