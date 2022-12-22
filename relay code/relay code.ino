int relay=2;
int solenoid=3;
int push_button=4;

void setup() {
pinMode(relay,OUTPUT);
pinMode(solenoid,OUTPUT);
pinMode(push_button,INPUT);
Serial.begin(9600);

}

void loop() { 
if digitalRead(push_button,HIGH);
Serial.println("button is pressed");
DigitalWrite(relay,low)
delay(1000);
digitalWrite(push_button,LOW); //turns off the relay
Serial.println("button is released");
delay(1000);





}
