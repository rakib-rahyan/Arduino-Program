/*https://www.youtube.com/watch?v=jbrAJPqtw5I&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
1. pinMOde() / this function for whice pin we can used for (configures the spwcified pin to beheve either as an input or output)
  syntex: pinMode(pin,mode); pin= arduino pin mode Input/output .. ex: pinMode(13,Output);
2. digitalWrite() weite a Hige or a Low to a digital pin.
  Hige: 5v / Low: 0V
  Suntax: digitalWrite(pin, value);
  value: HIGH/lOW.. Ex: digitalWrite(13,HIGH);
3. delay() Pauses the program for the amount of time(in milliseconds) secified as parameter.
  Syntax: delay(ms);
  ms: the number of milliseconds to pause.. Ex: delay(1000);
  ms(1000)=1s
*/
void setup() {
  // put your setup code here, to run once:
  //1st whice pin we case use or how to used 
  pinMode(13, OUTPUT); //Why i use in void setup, this line canot many time exicute, just this line exicute 1 time.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);// for led on 
  delay(1000);
  digitalWrite(13, LOW);// for led off
  delay(1000); 
}
