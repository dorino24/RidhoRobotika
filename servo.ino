#include <Servo.h>
Servo servo6;
void setup() {
  
 servo6.attach(6);
  
}

void loop() {
  int a=0 ;
  for( a; a<=180;a++){
    servo6.write(a);
  delay(3);
  }
  for( a; a>=0;a--){
    servo6.write(a);
  delay(3);}
}
