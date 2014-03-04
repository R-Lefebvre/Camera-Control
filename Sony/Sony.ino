#include <multiCameraIrControl.h>
 
Canon D5(13);
 
void setup(){
}
 
void loop(){
  D5.shutterNow();
  delay(5000);
  D5.shutterDelayed();
  delay(5000);
}
