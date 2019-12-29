#include "inductance.h"
void setup(){
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  delay(200);
}
void loop(){
 Inductance con;
 con.getInductance();
} 
