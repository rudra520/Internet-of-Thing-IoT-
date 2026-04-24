#include <ESP32Servo.h> 
int buttonpin= 13; 
int relaypin = 2; 
int last_state= HIGH; 
 
Servo myservo;  // Create Servo object to control servo 
 
long pos = 0;   //var to store servo position 
 
void setup(){ 
  Serial.begin(115200); 
  pinMode(buttonpin, INPUT_PULLUP); 
  pinMode(relaypin, OUTPUT); 
  myservo.attach(5);    // attaches the servo on pin 9 to the servo object 
} 
 
void loop() { 
  int value=digitalRead(buttonpin); 
  if(last_state!=value){ 
    last_state=value; 
    if(value==HIGH){ 
      digitalWrite(relaypin,LOW); 
      Serial.println("released"); 
      for(pos=0;pos<=180;pos+=1){ 
        myservo.write(pos); 
        delay(15); 
      } 
      for(pos=180;pos>=0;pos-=1){ 
        myservo.write(pos); 
        delay(15); 
      } 
    } 
    else{ 
digitalWrite(relaypin,HIGH); 
Serial.println("pressed"); 
} 
} 
}