int pinTrig = 7;
int pinEcho = 6;
long durasi, cm, in;

void setup() {
  
  Serial.begin(9600);
  pinMode(pinTrig, OUTPUT);
  pinMode(pinEcho, INPUT);

}

void loop() {

  digitalWrite(pinTrig, LOW);
  delayMicroseconds(5);
  digitalWrite(pinTrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pinTrig, LOW);
  
  pinMode(pinEcho, INPUT);
  durasi = pulseIn(pinEcho, HIGH);
  
  cm = (durasi/2) / 29.1;
  in = (durasi/2) / 74;
  
  Serial.print(in);
  Serial.print(" in, ");
  Serial.print(cm);
  Serial.print(" cm");
  Serial.println();
  
  delay(50);
  
}
