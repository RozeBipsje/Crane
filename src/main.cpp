#include <Arduino.h>

//CW is clock wise
//CCW is counter clockwise

//L293D motor driver is used


const int motorPin1  = 5;  // Pin 14 of L293
const int motorPin2  = 6;  // Pin 10 of L293
const int buttonPin1 = 2;     // the number of the pushbutton pin CW
const int buttonPin2 = 4;     // the number of the pushbutton pin CCW

int buttonState1 = 0;         // variable for reading the pushbutton status CW
int buttonState2 = 0;         // variable for reading the pushbutton status CCW

 
void setup(){
 
    //Set pins as outputs
    pinMode(motorPin1, OUTPUT);
    pinMode(motorPin2, OUTPUT);
    pinMode(buttonPin1, INPUT); //CW
    pinMode(buttonPin2, INPUT); //CCW

  
}


void loop(){
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1); //CW
  buttonState2 = digitalRead(buttonPin2);//CCW

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) { //CW
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  }
 if (buttonState2 == HIGH) {//CCW
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  }
}
