void setup() {
 
  Serial.begin(9600);         
}
 
void loop() {
 
  int n = analogRead(A3);    
 
  float vol = n * (5.0 / 1023.0*100);   
  Serial.  print("vol="); 
  Serial.  println(vol);                   
  delay(2000);                           
}
