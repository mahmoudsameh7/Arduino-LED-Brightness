int ledPin = 11;
int brightness = 0;   
int k = 5;   

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  analogWrite(ledPin, brightness); 


  brightness = brightness + k;

  
  if (brightness == 0 || brightness == 255) {
    k = -k;
  }

  delay(50); 
}
