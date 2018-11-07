#include <Wire.h>
#include <EEPROM.h>
#include <LiquidCrystal.h>
#define e 01100101
#define n 01101110
#define t 01110100
#define r 01110010
#define z 01111010
#define espace 00100000
#define l 01101100
#define c 01100011
#define o 01101111
#define d 01100100

void setup() {
  Wire.begin();

}

void loop() {
  Wire.beginTransmission(0x3B);

  Wire.write(e);
  Wire.write(n);
  Wire.write(t);
  Wire.write(r);
  Wire.write(e);
  Wire.write(z);
  Wire.write(espace);
  Wire.write(l);
  Wire.write(e);
  Wire.write(espace);
  Wire.write(c);
  Wire.write(o);
  Wire.write(d);
  Wire.write(e);
  Wire.endTransmission();

}
