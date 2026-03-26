
// the setup function runs once when you press reset or power the board
#include <Servo.h>
char com;
Servo myservo;
int pos = 0;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  myservo.attach(3);
}

// the loop function runs over and over again forever
void loop() {

com = Serial.read();
  
if ((com)=='a'){
digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
myservo.write(90);
}

if ((com)=='b'){
digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
myservo.write(0);
}

  delay(200);                      // wait for a second
}
