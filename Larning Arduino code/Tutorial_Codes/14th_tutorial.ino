/*Tutorail link: https://youtube.com/watch?v=Ankfz39P9gM&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM&index=14&t=291s
1. While looop coontrol strututre in arduino programming 
  A While loop continuously, and infinitely, until the expression inside the parenthesis,() becomes false. Something must change 
  the tested variavle, or the while loop will never exit. This could be in your code, such as an incremented variable, or an extenal condition, such as 
  testing a sensor. 
  Syntax:
  while(conditon){
    statement(s)
  }
  Example:
  var =0;
  while(var<200){
    do something repetitive 200 times
    var++;
  }
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, INPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(5)==LOW){
    digitalWrite(4, LOW); 
  }
  digitalWrite(4, HIGH);
  delay(1000);
}
