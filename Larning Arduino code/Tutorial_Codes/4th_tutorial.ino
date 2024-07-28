/*https://www.youtube.com/watch?v=73wevmyawVU&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
1. Serial communication
  tx / rx (tx transmiter pin, rx reciver pin)(URAT full form Universl Asynchronous Transmittor Recever)
*/
void setup() {
  // put your setup code here, to run once:
 // serial cominication initialize
  Serial.begin(9600); // 9600 spreed bit per secoend deta comunication 
}

void loop() {
  // put your main code here, to run repeatedly:
  /*
  char val = Serial.read()    i can weit just this line then the program print in serial monitor a garveg value, so lolition is conditon 
  Serial.print(val);
  */
  if(Serial.available()==1){
    char val = Serial.read();
    Serial.print(val);
  }
}
