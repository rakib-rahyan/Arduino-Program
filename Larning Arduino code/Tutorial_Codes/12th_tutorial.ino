/*Tutorial link: https://www.youtube.com/watch?v=mgbFAsQK7RY&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM&index=12
1. switch..case control structure in arduino progrmming 
  Like if statements, switch case controls the flow of programs by 
  allowing programmers to specify different code that should be executed in various conditons. in particular, a switch statement 
  compares the value of a variable to the values specified in case statements. When a case statement in found whose value matches that
  of the variable, the code in the case statement is run. 
  = The break keywoed exits the swith statement, and is typincally used at the end of eache case. Without a break staement, the switch 
  statement will continue executing the following expressions("fallinthrought") until a break, or the end of the switch statement is reached. 
  switch(var){
    case 1: 
    statement 1;
    break;
    case 2; 
    statement 2;
    break;
    default  
      statement3:
      break;                         
  }
*/
int count =0;
void setup(){
  pinMode(2, INPUT_PULLUP);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int val = digitalRead(2);
  if(val == 0){
	count = count + 1;
  }
  Serial.println(count);
  
  switch(count){
  case 1: digitalWrite(3,HIGH);
    break;
  case 2: digitalWrite(4,HIGH);
    break;
  case 3: digitalWrite(5,HIGH);
   break;
  case 4: digitalWrite(6,HIGH);
   break;
  default: 
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    count=0;
  }
  delay(200);
}