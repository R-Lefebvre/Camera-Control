#include <multiCameraIrControl.h>
 
Sony Nex(9);

int led = 13;
 
void setup(){
  pinMode(led, OUTPUT);  
}
 
void loop(){
  
  digitalWrite(led, HIGH);
  Nex.shutterNow();
  digitalWrite(led, LOW); 
  delay(5000);
}
