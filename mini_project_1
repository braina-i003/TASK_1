long t;
float d;

void setup() {
  pinMode(4,OUTPUT);
  pinMode(3,INPUT);
  Serial.begin(9600);
}
void loop() {
  digitalWrite(,LOW);
  delayMicroseconds(2);
  digitalWrite(4,HIGH);
  delayMicroseconds(10);
  digitalWrite(4,LOW);
  t = pulseIn(3,HIGH);
  d = t*0.034/2;

  Serial.print("Distance: ");
  Serial.print(d);
  Serial.println(" cm");
  if(d<15){
    Serial.println("danger,veryclose ");
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    digitalWrite(13,HIGH);
  }
  if(d<30 && d>15){
    Serial.println("warning");
    digitalWrite(13,LOW);
    digitalWrite(11,LOW);
    digitalWrite(12,HIGH);
  }
  if(d>30){
    Serial.println("safe");
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
  }
  

  delay(1000);
}
