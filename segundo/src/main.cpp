
#include <Arduino.h>
#include "BluetoothSerial.h"

#define LED 2
#define TOUCH 4

BluetoothSerial SerialBT;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(115200);
  SerialBT.begin("julijulian"); //Bluetooth device name
  Serial.println("Dispositivo iniciado!");
}

void loop() {
  int valorTouch = touchRead(TOUCH);
  SerialBT.print(String(valorTouch) + "#");
  delay(500);
  if (SerialBT.available()) {
    char miLetra = SerialBT.read();
    if (miLetra == 'L') {
      digitalWrite(LED, HIGH);
    } else if (miLetra == 'S') {
      digitalWrite(LED, LOW);
    }
  }
}

