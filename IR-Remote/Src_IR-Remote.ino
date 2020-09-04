#include <IRremote.h>

int pinIR = 11;

IRrecv recv(pinIR);
decode_results hasil;

void setup() {

  Serial.begin(9600);
  recv.enableIRIn();

}

void loop() {
  
  if(recv.decode(&hasil)) {
    Serial.println(hasil.value);
    recv.resume();
  }

}
