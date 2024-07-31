/*Tutorial link: https://www.youtube.com/watch?v=nwLSH9imEYc&list=PLV3C-t_tgjGFyXP_-AF37AoIuxM9jzELM
1. analogRead()
  Reads the value from te specified analog pin. Arduino boards contain a 
  multicannel. 10-bit analog to digital converter. This means that it will map
  input voltages beteween 0 and 5V into integer values between 0 and 1023
  1111111111>=1023
  Syntax: analogRead(pin);
  pin: Arduino pin
  Ex: analogREad(A0);
2. analogWrite()
  Writes an analog value (PWM wave) to a pin. Can be used to light a LED at 
  varying brightness or drive a motor at various speeds
  (0-255)>(0v-5v) output commend
  Syntax: analogWrite(pin, value);
  pin: Arduino pin
  value: the duty cycle: between 0(always off) and 255(always on).
  Ex: analogWrite(6,200);
*/
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}