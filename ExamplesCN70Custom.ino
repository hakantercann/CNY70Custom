#include <CNY70Custom.h>

CNY70Custom mySensor(14);
String colour;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //mySensor.isThisWhite();//return boolean value
  colour = mySensor.getColour();
  Serial.println(colour);
  delay(1000);
}
