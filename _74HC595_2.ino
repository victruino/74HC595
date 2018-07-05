//Pin connected to ST_CP of 74HC595
int latchPin = 7;
//Pin connected to SH_CP of 74HC595
int clockPin = 8;
////Pin connected to DS of 74HC595
int dataPin = 4;
byte Mix[8]={B10000000,B11000000,B11100000,B11110000,B11111000,B11111100,B11111110,B11111111};
byte Mix2[8]={B11111111,B11111110,B11111100,B11111000,B11100000,B11000000,B10000000,B00000000};
byte Mix3[8]={B00000000,B11111111,B00000000,B11111111,B00000000,B11111111,B00000000,B11111111};
byte Mix4[8]={B10000001,B11000011,B11100111,B00011000,B00111100,B01111110,B11111111,B10101010};
byte Mix5[8]={B10101010,B01010101,B10101010,B01010101,B10101010,B01010101,B10101010,B01010101};
byte Mix6[8]={B10000000,B11000000,B11100000,B11110000,B11111000,B11111100,B11111110,B11111111};
byte Mix7[8]={B11111111,B11111110,B11111100,B11111000,B11100000,B11000000,B10000000,B00000000};

void setup() {
  
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
 
}

void loop() {
  //count up routine
  for (int j = 0; j < 8; j++) {
    //ground latchPin and hold low for as long as you are transmitting
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, (Mix[j]));
    //return the latch pin high to signal chip that it
    //no longer needs to listen for information
    digitalWrite(latchPin, HIGH);
    delay(100);
  }
   for (int j = 0; j < 8; j++) {
    //ground latchPin and hold low for as long as you are transmitting
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, (Mix2[j]));
    //return the latch pin high to signal chip that it
    //no longer needs to listen for information
    digitalWrite(latchPin, HIGH);
    delay(100);
  }
   for (int j = 0; j < 8; j++) {
    //ground latchPin and hold low for as long as you are transmitting
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, (Mix3[j]));
    //return the latch pin high to signal chip that it
    //no longer needs to listen for information
    digitalWrite(latchPin, HIGH);
    delay(100);
  }
  for (int j = 0; j < 8; j++) {
    //ground latchPin and hold low for as long as you are transmitting
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, (Mix4[j]));
    //return the latch pin high to signal chip that it
    //no longer needs to listen for information
    digitalWrite(latchPin, HIGH);
    delay(500);
  }
  for (int j = 0; j < 8; j++) {
    //ground latchPin and hold low for as long as you are transmitting
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, (Mix5[j]));
    //return the latch pin high to signal chip that it
    //no longer needs to listen for information
    digitalWrite(latchPin, HIGH);
    delay(500);
  }
  for (int j = 0; j < 8; j++) {
    //ground latchPin and hold low for as long as you are transmitting
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, (Mix6[j]));
    //return the latch pin high to signal chip that it
    //no longer needs to listen for information
    digitalWrite(latchPin, HIGH);
    delay(100);
  }
  for (int j = 0; j < 8; j++) {
    //ground latchPin and hold low for as long as you are transmitting
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, MSBFIRST, (Mix7[j]));
    //return the latch pin high to signal chip that it
    //no longer needs to listen for information
    digitalWrite(latchPin, HIGH);
    delay(100);
  }
}
