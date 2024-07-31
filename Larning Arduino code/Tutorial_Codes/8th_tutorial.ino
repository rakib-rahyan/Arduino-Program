/*tutotial link: https://www.youtube.com/watch?v=vuIWHFFzSHg&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
1. pinMode : tutotial 4
2. difitalWrite: tutorial 4
3. digitalRead()  
  Reads the value from a specified digital pin, either HIGH or LOW. 
  Syntax: digitalRead(pin);
  pri: Arduino pin 
  ex: digitalRead(12);
*/
void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT_PULLUP); //INPUT_PULLUP: Makes the Digital Pin HIgh initially, until it receivers a LOW Signal from an external device.
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(12);
 // Serial.print(val); pint new line is next line comment
  Serial.println(val); //ln for new line
  digitalWrite(13, val); // high= 1= true, low = 0= false
}
