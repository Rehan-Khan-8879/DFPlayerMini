#include "Arduino.h"
#include "DFRobotDFPlayerMini.h"
#include <SoftwareSerial.h>

#define button 4

int buttonval =1 ;

// Initialize SoftwareSerial on pins 2 (RX) and 3 (TX)
SoftwareSerial mySerial(2, 3);
DFRobotDFPlayerMini myDFPlayer;

void setup() {
  // Begin serial communication with DFPlayer Mini

  mySerial.begin(9600);
  Serial.begin(115200);
  myDFPlayer.begin(mySerial);
  pinMode(button,INPUT_PULLUP);

  // Initialize DFPlayer Mini with software serial
 

  // Set volume and play the first MP3 file
  myDFPlayer.volume(10);  // Set volume (0-30)
       // Play first MP3 (0001.mp3)
       myDFPlayer.play(1);
} 

void loop() {
  // Empty loop, no further actions required
  buttonval = digitalRead(button);
  if(buttonval == 0){
    myDFPlayer.next();
    delay(500);
  }
  Serial.println(buttonval);


 // myDFPlayer.play(1);
}
