#include <multiCameraIrControl.h>
 
Sony Nex(9);

int led = 13;
int trigger_pin = 12;
int trigger_state;
int trigger_positive_transition;
 
void setup(){
  pinMode(led, OUTPUT); 
  pinMode(trigger_pin, INPUT); 
}
 
void loop(){
  
  trigger_state = digitalRead(trigger_pin);
  
  if (trigger_state){  
  
    digitalWrite(led, HIGH);
    Nex.shutterNow();
    digitalWrite(led, LOW); 
    delay(3000);
  }
  
  
}
