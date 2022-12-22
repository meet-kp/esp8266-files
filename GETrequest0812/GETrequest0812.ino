#include<ESP8266WiFi.h>
#include<WifiClient.h>
#include<ESP8266HTTPClient.h>

WiFiClient client;
HTTPClient http;
void setup()
{
  Serial.begin(9600);
// connecting to wifi 
WiFi.begin("lekeamp","87654321");
 while(WiFi.status ()! -WL_CONNECTED)
  {
  serial.println("****"); //prints * while the nodemcu is getting connected to the WiFi
  delay(200);
  }

 Serial.println("NodeMCU is connected !!");
 }
 int http code;

 void loop()
 {
http.begin(client,"https://api.thingspeak.com/update?api_key=K6HATN4GK9UKUZ7I&field1=0");
Serial.println("Waiting for response"); 
httpcode= http.GET();

 if (httpcode >0)
  {
  Serial.println("Data sent successfully");  
  }
  else
  {
    Serial.println("Error sending the data");
  }
http.end();
 }