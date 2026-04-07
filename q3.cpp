unsigned long startime = 0;
unsigned long endtime = 0;
int buttonstate = 0;

void setup() {
  
  pinMode(2, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  randomSeed(analogRead(A1)); 

}

void loop() {
  buttonstate = digitalRead(2);
  int ran=random(5000,10000);
  Serial.println("get ready");
  delay(ran);
  digitalWrite(4,HIGH);
  startime=millis();
  
  while(digitalRead(2)!=HIGH){
    
  }
  
  digitalWrite(4,LOW);
  endtime=millis()-startime;
  Serial.println("reaction time ;");
  Serial.println(endtime);

  
}
