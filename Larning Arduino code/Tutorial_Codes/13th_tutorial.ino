/*Tutorail link: https://www.youtube.com/watch?v=sTcyc23K4ZE&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM&index=13&t=139s
1. for loop
*/
void setup(){
	Serial.begin(9600);
}
void loop(){
  for(int i=0; i<=255; ){
    Serial.println(i);
    analogWrite(10, i);
    delay(200);
    analogWrite(10,0);
    delay(100);
    i=i+50;
  }
  for(int i=255; i>=0; ){
    Serial.println(i);
    analogWrite(10, i);
    delay(200);
    analogWrite(10,0);
    delay(100);
    i=i-50;
  }
  delay(2000);
}