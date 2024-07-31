/*tutorial link: https://www.youtube.com/watch?v=Nb9rN7gGda8&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
1. The if statement can be followed by an optional if...else statement,
  which is very useful to test various condiotns.
  Sntax: 
  if(conditionl)
  {statement1;}
  else if{statement2;}
  else{statement3;}
  */
int count =0;
void setup(){
  pinMode(2, INPUT_PULLUP);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  int val = digitalRead(2);
  if(val == 0){
	count = count + 1;
  }
  Serial.println(count);
  if(count == 1){
    analogWrite(6,100);
  }
  else if(count== 2){
    analogWrite(6, 180);
  }
  else if(count == 3){
    analogWrite(6,255);
  }
  else{
    analogWrite(6,0);
    count=0;
  }
  delay(500);
}
