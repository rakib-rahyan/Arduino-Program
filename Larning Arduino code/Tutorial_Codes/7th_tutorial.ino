//data to store 2,3,4,5,6
/*tutorial link: https://www.youtube.com/watch?v=i1HgARwq3bw&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
1. Array 
  An array is a collection of variables that are accessed with an index number.
  examples
  int val[6];
  int val[]={2,3,6,8,8,9};
  int val[6]={5,2,9,6,7,4};
  char val[4]={'a','b','c''d'};
  char val[]="abcd";
  char val[4]"abcd";
*/
int a[5]={2,3,4,5,6};
String val[]={"apple\n", "mango\n","banana\n"};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print(a[3]);
  Serial.print(val[0]);
}

void loop() {
  Serial.print(val[1]);
  delay(555);
  Serial.print(val[2]);
  delay(1000);
  Serial.print(a[2]);
  delay(700);
  // put your main code here, to run repeatedly:
}