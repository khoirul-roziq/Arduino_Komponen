const int pinLed[8] = {2,3,4,5,6,7,8,9};
bool digit[11][8] = { 
        {0,0,0,0,0,0,1,1},  // = 0
        {1,0,0,1,1,1,1,1},  // = 1
        {0,0,1,0,0,1,0,1},  // = 2
        {0,0,0,0,1,1,0,1},  // = 3
        {1,0,0,1,1,0,0,1},  // = 4
        {0,1,0,0,1,0,0,1},  // = 5
        {0,1,0,0,0,0,0,1},  // = 6
        {0,0,0,1,1,1,1,1},  // = 7
        {0,0,0,0,0,0,0,1},  // = 8
        {0,0,0,0,1,0,0,1},  // = 9
        {1,1,1,1,1,1,1,0},  // = .    
        };
const char off = 'HIGH';
const char on = 'LOW';

void setup() {
  
  for(int i=0;i<=7;i++) {
    pinMode(pinLed[i], OUTPUT); 
  }
  for(int i=0;i<=7;i++) {
    digitalWrite(pinLed[i], off);
  }
}

void loop(){
  for(int i=0;i<=10;i++) {
    play(i);
    delay(500);
  }
}

void play(int angka) {
   for(int j=0;j<=7;j++) {
     digitalWrite(pinLed[j], digit[angka][j]);
   } 
}
