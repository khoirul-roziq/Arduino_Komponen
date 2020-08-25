int pinLm35 = A0;
int analogValue;
float temperatureValue;

void setup() {
  Serial.begin(9600);
}

void loop() {
  analogValue = analogRead(pinLm35);
  temperatureValue = analogValue * 4.88;
  temperatureValue /= 10;
  Serial.print(temperatureValue);
  Serial.println(" C");
  delay(1000);
}
