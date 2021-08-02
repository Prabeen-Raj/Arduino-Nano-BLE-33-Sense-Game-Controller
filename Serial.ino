#include <Arduino_APDS9960.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  if (!APDS.begin()) {
    Serial.println("Error initializing APDS9960 sensor!");
  }
}

void loop() {
  // check if a proximity reading is available
  if (APDS.proximityAvailable()) {
    // read the proximity
    // - 0   => close
    // - 255 => far
    // - -1  => error
    int proximity = APDS.readProximity();
    if (proximity==0){
         Serial.println('d');
      
    }

    // print value to the Serial Monitor
 
  }

  // wait a bit before reading again
  delay(100);
}