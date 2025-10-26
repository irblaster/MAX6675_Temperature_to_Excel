// this example is public domain. enjoy!
// https://learn.adafruit.com/thermocouple/

#include "max6675.h"

// Modify pinout for the D1 Mini Thermocouple shield 
// From EZMation
// https://ezmation.com/wifi/67-wifi-max6675-k-type-thermocouple.html
int thermoDO = D6;
int thermoCS = D8;
int thermoCLK = D5;

MAX6675 thermocouple(thermoCLK, thermoCS, thermoDO);

void setup() {
  Serial.begin(9600);

  Serial.println("MAX6675 test");
  // wait for MAX chip to stabilize
  delay(500);
}

void loop() {
  // basic readout test, just print the current temp
  
  // For the excel data streamer, we only want the temp in C
  // One teperature reading per line
  // no other text

   //Serial.print("C = "); 
   Serial.println(thermocouple.readCelsius());
   //Serial.print("F = ");
   //Serial.println(thermocouple.readFahrenheit());
 
   // For the MAX6675 to update, you must delay AT LEAST 250ms between reads!
   delay(1000);
}
