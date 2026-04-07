unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;

bool ledState1 = LOW;
bool ledState2 = LOW;
bool ledState3 = LOW;

void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT); 
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis1 >= 500) {
    previousMillis1 = currentMillis;
    ledState1 = !ledState1;
    digitalWrite(8, ledState1);
  }

  if (currentMillis - previousMillis2 >= 1000) {
    previousMillis2 = currentMillis;
    ledState2 = !ledState2;
    digitalWrite(9, ledState2);
  }

  if (currentMillis - previousMillis3 >= 1500) {
    previousMillis3 = currentMillis;
    ledState3 = !ledState3;
    digitalWrite(10, ledState3);
  }
}
