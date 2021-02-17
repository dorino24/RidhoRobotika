#define led1 12
#define led2 13
#define motor 3
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(motor,OUTPUT);
}

void loop() {
  digitalWrite(motor,HIGH);
  if (digitalRead(motor) == 1){
    digitalWrite(led1 ,HIGH);}
  else {
  digitalWrite(led2 ,HIGH);
}}
