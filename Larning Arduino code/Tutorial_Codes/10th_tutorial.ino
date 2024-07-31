/*tutorial link: https://www.youtube.com/watch?v=ptV-YC-bknw&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
1. if..else control structure in arduino programming
  the if statement checks for a conditon and executes the proceeding 
  statement or set ot statements if the conditon is 'true"
  Syntax: 
  if(conditon){
    statement1;
  } 
  else{
    statement2;
  }
  Example
  if(temperature>30){
    digitalWrite(6,HIGH);
  }
  else{
    digitalWrite(6,LOW);
  }
  Comparison Operatiors:
  x==y(x is equal to y)
  x!=y(x is not equal to y)
  x<y(x is less than y)
  x>y(x is greater than y)
  x<=y(x is less than or equal to y)
  x>=y(x is greater than or equal to y)
*/
void setup(){
  pinMode(2, INPUT_PULLUP);
  pinMode(6,OUTPUT);
}

void loop(){
  int val = digitalRead(2);
  if(val == 0){
    digitalWrite(6,LOW);	
	}
  else{
    digitalWrite(6,HIGH);
  	}
}
