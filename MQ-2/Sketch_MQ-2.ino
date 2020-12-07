#include <MQ2.h>

const byte pinMq2 = A0;
int gasLpg, gasCo, gasSmoke;

MQ2 mq2(pinMq2);

void setup()
{
    Serial.begin(9600);
    mq2.begin();
}

void loop()
{
    float* values = mq2.read(true); // true untuk menampilkan ke serial monitor

    gasLpg = mq2.readLPG();
    gasCo = mq2.readCO();
    gasSmoke = mq2.readSmoke();

    delay(500);
}
