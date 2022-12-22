/*instead of relay and solenoid lock I have used a led for the ease in execution of program .
Once the program shows the correct output I'll make appropriate changes  */
#define BUTTON  2     // the number of the pushbutton pin
#define led   3     // the number of the relay pin

int buttonState = 0;         // variable for reading the pushbutton status

void setup() { 
  Serial.begin(9600);
  pinMode(led, OUTPUT);   // initialize the LED pin as an output:
  pinMode(BUTTON, INPUT_PULLUP);   // initialize the pushbutton pin as an input:
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(BUTTON);

  // check if the pushbutton is pressed.
  if (buttonState   == HIGH) 
  {
     digitalWrite(led, HIGH);   // turn LED on:
  } 
  Serial.println("button is pressed");
  delay(1000);
  else
 {  
  digitalWrite(led, LOW);  // turn LED off:
  }
   Serial.println("button is released");
}

 
