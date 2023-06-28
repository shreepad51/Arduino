#include <SPI.h>
#include <LoRa.h>

int counter = 0;

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("LoRa Sender");

  if (!LoRa.begin(433E6)) {
    Serial.println("Starting LoRa failed!");
    while (1);
  }
}

void loop() {
  Serial.print("Sending packet: ");

  // send packet
  LoRa.beginPacket();
  LoRa.print("SHRIPAD");
  LoRa.endPacket();
  delay(1000);

  LoRa.beginPacket();
  LoRa.print("LAXMAN");
  LoRa.endPacket();
  delay(1000);

  LoRa.beginPacket();
  LoRa.print("SHELAKE");
  LoRa.endPacket();
  delay(1000);

  LoRa.beginPacket();
  LoRa.print("ARAN");
  LoRa.endPacket();
  delay(1000);

  LoRa.beginPacket();
  LoRa.print("SOLAPUR");
  LoRa.endPacket();
  delay(1000);
}