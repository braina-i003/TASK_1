void setup() {
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int b  = analogRead(A0);
  int p = map(b, 200, 800, 0, 100);
  
  digitalWrite(11,LOW);
  while(analogRead(A0)!=0){
    digitalWrite(11,HIGH);
  }

}
