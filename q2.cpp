void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void set(int r, int g, int b) {
  analogWrite(9,r);
  analogWrite(10,g);
  analogWrite(11,b);
}

void loop() {
  int pt = analogRead(A0);

 
  int zone = pt / 146;
  int t    = (pt % 146) * 255 / 146; 

  switch (zone) {
    case 0: set(255,   t,   0); break;
    case 1: set(255-t, 255, 0); break;
    case 2: set(0,     255, t); break;
    case 3: set(0,  255-t, 255); break;
    case 4: set(t,     0, 255); break;
    case 5: set(255,   0, 255-t); break;
    default: set(255, 255, 255); break;
  }


}
