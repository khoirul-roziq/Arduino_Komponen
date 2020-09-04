int laser = 10;

void setup() {
  
  Serial.begin(9600);
  pinMode(laser, OUTPUT);
  
}

void loop() {

  digitalWrite(laser,HIGH);

}
