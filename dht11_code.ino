#include "DHTesp.h"
#include <ESP8266WiFi.h> 
#include <WiFiUdp.h>
DHTesp dht;
#define WIFI_SSID "Home"
#define WIFI_PASS "InsertPassword"
WiFiUDP UDP;
void setup()
{
Serial.begin(9600);
Serial.println();
Serial.println("Status\t\tHumidity (%)\t\tTemperature (C)\t");
dht.setup(14, DHTesp::DHT11); // GPIO14

WiFi.begin(WIFI_SSID, WIFI_PASS); 


Serial.print("Connecting to..."); 
Serial.print(WIFI_SSID);
while(WiFi.status() != WL_CONNECTED){ 
  delay(100); 
  Serial.println("."); 
}

Serial.print("Connected to ip");
Serial.println(WiFi.localIP());
}
void loop()
{
//delay(dht.getMinimumSamplingPeriod() + 100);
delay(10000);
float humidity = dht.getHumidity();
float temperature = dht.getTemperature();
String packet = String(temperature) + " " + String(humidity);
Serial.print("Status: ");
Serial.print(dht.getStatusString());
Serial.print("\t");
Serial.print("Humidity (%): ");
Serial.print(humidity, 1);
Serial.print("\t");
Serial.print("Temperature (C): ");
Serial.print(temperature, 1);
Serial.print("\t");
Serial.println();
UDP.beginPacket("192.168.2.78", 1024); 
UDP.print(packet); 
UDP.endPacket();
}
