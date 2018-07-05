//Pin conectado al ST_CP del 74HC595
int latchPin = 7;
//Pin conectado l SH_CP del 74HC595
int clockPin = 8;
//Pin conectado al DS del 74HC595

int dataPin = 4;

void setup() {
  
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
 
}

void loop() {
 
  for (int j = 0; j < 256; j++) {
    //primero se debe mantener el latchPin en LOW para que mantenga los datos
    digitalWrite(latchPin, LOW);
    //B00000000 son los 8 bits en binario, le sumaremos j para hacer un contador
    shiftOut(dataPin, clockPin, LSBFIRST, B0000000 + j);
    // despues de colocar los 8 bits en el puerto de salida del 74HC595
    // se activa el latchPin en HIGH para que salgan los datos por los pines Q0-Q7
    digitalWrite(latchPin, HIGH);
    delay(100);
  }
}
