//program akselerasi roda
int motor1=8;
int motor2=9;

int a=0;
void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
   for(a ; a<=255;a++){
       digitalWrite(motor1,LOW);
       analogWrite(motor2,a);
       delay(2);
}
}
void loop(){
  
   analogWrite(motor2,255);
 }    
