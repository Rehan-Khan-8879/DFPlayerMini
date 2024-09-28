#include "Arduino.h"    // Libarary 
#include "DFRobotDFPlayerMini.h"  // libarary
#include <SoftwareSerial.h>    // libarary

#define button 4   
// defining the arduino pin for pushbutton
int buttonval =1 ;   // Variable To Store pushbutton value

// Initialize SoftwareSerial on pins 2 (RX) and 3 (TX)
SoftwareSerial mySerial(2, 3);
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  // Begin serial communication with DFPlayer Mini

  mySerial.begin(9600);  
  Serial.begin(115200);  // for Serial communication
  myDFPlayer.begin(mySerial);
  pinMode(button,INPUT_PULLUP); // setting pin as pullup

  
 

  // Set volume and play the first MP3 file
  myDFPlayer.volume(10);  // Set volume (0-30)
       // Play first MP3 (0001.mp3)
       myDFPlayer.play(1);
} 

void loop() {
  // Empty loop, no further actions required
  buttonval = digitalRead(button);   //reading the value of button
  
  if(buttonval == 0){     
    myDFPlayer.next();     // giving the condition for every buttonpress change the sound track and play next sound
    delay(500);             //  giving delay for releasing pushbutton
  }
  Serial.println(buttonval);     // for testing pourpose 


 // myDFPlayer.play(1);
}
