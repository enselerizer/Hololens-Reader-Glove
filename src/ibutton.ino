#include <OneWire.h>

#define IBUTTON_PIN 5

#define IBUTTON_READING_INTERVAL 250 /* ms */

OneWire onewire(IBUTTON_PIN);




void setup(void) {
  Serial.begin(115200);
  Serial.println("\n[iButton WiFi Reader]\n");


}

void loop(void) {

  
  byte addr[8];

  if (!onewire.search(addr)) {
    onewire.reset_search();
    delay(250);
    return;
  }

  Serial.print("ROM =");
  for (int i = 0; i < 8; i++) {
    Serial.write(' ');
    Serial.print(addr[i], HEX);
  }
  Serial.println();

  if (OneWire::crc8(addr, 7) != addr[7]) {
    Serial.println("CRC is not valid !");
    return;
  }

  
  delay(1000);
  
}
