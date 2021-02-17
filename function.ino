//led indikator kecepatan motor dc
#define led1 12
#define led2 13
#define motor1 8
#define motor2 9
int a=0;
void led(int b,int c){ 
    digitalWrite(led1, b);
    digitalWrite(led2, c);
}
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(motor1,OUTPUT);
pinMode(motor2,OUTPUT);
 Serial.begin(9600);
}

void loop() {
  for(a ; a<=255;a++){
      digitalWrite(motor1,LOW);
      analogWrite(motor2,a);
     if (a> 0&&a<150){
      led(1,0);  } 
     else {
     led(1,1); }
    Serial.println(a);
     delay(10);
  }
   for(a ; a>=0;a--){
      digitalWrite(motor1,LOW);
      analogWrite(motor2,a);
     if (a> 0&&a<150){
      led(1,0);  } 
     else {
     led(1,1); }
      Serial.println(a);
     delay(10);
}}
