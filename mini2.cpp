String itext = "";
const char* mc[] = {
  ".-",  
  "-...", 
  "-.-.", 
  "-..", 
  ".",    
  "..-.", 
  "--.",  
  "....",
  "..",   
  ".---", 
  "-.-", 
  ".-..", 
  "--",  
  "-.",  
  "---",  
  ".--.", 
  "--.-", 
  ".-.", 
  "...",  
  "-",    
  "..-", 
  "...-",
  ".--", 
  "-..-",
  "-.--",
  "--.."  
};

void setup() {
  pinMode(4, OUTPUT);
  Serial.begin(9600);
  Serial.println("Type something and press Send:");
}

void loop() {
  if (Serial.available() > 0) {
    itext = Serial.readString();
    itext.trim();
    Serial.println(itext);

    for (int i = 0; i < itext.length(); i++) {
      const char* l = mc[toupper(itext[i]) - 'A'];
      Serial.print(l);

      for (int j = 0; l[j] != '\0'; j++) {        
        if (l[j] == '.') {                         
          digitalWrite(4, HIGH);
          delay(200);
          digitalWrite(4, LOW);                      
          delay(200);
          
        } 
        else {
          digitalWrite(4, HIGH);
          delay(600);
          digitalWrite(4, LOW);
          delay(200);
        }
      }
      
      delay(400);
    }
  }
}
