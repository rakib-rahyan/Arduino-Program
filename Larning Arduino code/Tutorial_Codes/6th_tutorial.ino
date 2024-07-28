/*tutorial link: https://www.youtube.com/watch?v=k1LcAIZZcYc&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
char in asciichart 
1. char
  A data typw used to store a character value. Character literals are weitten in singel quotes, like this: 'A'
  Syntax: char var= val;
  var: variable name
  value: the value to assign to that variable 
  ex: char car= 'A';
2. Srting 
  A data tpe used to store set of characters that can also contain spaced 
  and numbers. Strings are always defined inside double quotes("Xyz")
  Synax: String var = val;
  var: variable name
  value: the value to assign to that variable
  Ex: String var = "zYz";
*/
char var = 65, var2 = 66, var3 = 67;
String var4= "Hi i am Rakib \nWelcome to my github\n";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print(var); //print var for 1 time 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(var2);
  delay(200); // 200 milisecund after print val 3
  Serial.print(var3);
  delay(555); //555 milisecound after print val 4
  Serial.print(var4);
  delay(750); // 750 milisecound after run again the loop
}
