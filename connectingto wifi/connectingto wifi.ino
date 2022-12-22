#include<ESP8266WiFi.h>
void setup() {
  // put your setup code here, to run once:
serial.begin(9600)
WiFi.begin("lekeamp","87654321");
 while(WiFistatus()! -WL_CONNECTED)
{
  serial.println("****")//prints * while the nodemcu is getting connected to the WiFi
  delay(200);
}

 Serial.println("NodeMCU is connected !!");
 Serial.print("IP Address");  // prints ip address of thre device
 Serial.println(WiFi.local IP()); // assigns and prionts a local ip to thew nodeMCU 
 Serial.print("MAC Address:");

 }



void loop() {
  // put your main code here, to run repeatedly:

}
                                                                               