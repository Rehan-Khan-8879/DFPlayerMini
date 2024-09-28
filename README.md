# DFPlayerMini

this code is written for interfacing DFPlayer mini with arduino uno 

connection 
DF pin TX  too arduinopin rx(2) becouse its softSerial
DFpin RX too arduinopn tx(3)   becouse its SoftSerial

DFpin speaker to speker 
DFpin vcc to arduino 5v vcc 
Dfpin ground to arduino ground 

One side of pushbutton to ground  (Becoude its input pullup)
And other side of pushbutton to arduino 4 pin   (for changing song)


 NOte that 1k ohm resistor shoul be connected in series to rx pin of dfplayer mini becoude its operate in 3.3 v 
