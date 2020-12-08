const byte pinFlame = A0;
int value;

void setup()
{
    Serial.begin(9600);
    pinMode(pinFlame, INPUT);
}

void loop()
{
    value = analogRead(pinFlame);
    Serial.println(value);
    delay(500);
}
