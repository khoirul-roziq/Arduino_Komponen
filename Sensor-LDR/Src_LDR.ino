int pinLdr = A1;
int intensitas;

void setup() {
  
  Serial.begin(9600);
  
}

void loop() {
  
  intensitas = analogRead(pinLdr);
  Serial.print("Intensitas : ");
  Serial.println(intensitas);
  
  delay(500);
  
}
