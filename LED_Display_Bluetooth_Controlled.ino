#include <Adafruit_GFX.h>
#include <Adafruit_NeoMatrix.h>
#include <Adafruit_NeoPixel.h>
#include "Alex.h"
#include <SoftwareSerial.h>
#define PIN 3

Adafruit_NeoMatrix LED = Adafruit_NeoMatrix(32, 8, PIN,
  NEO_MATRIX_BOTTOM  + NEO_MATRIX_RIGHT +
  NEO_MATRIX_COLUMNS + NEO_MATRIX_ZIGZAG,
  NEO_GRB            + NEO_KHZ800);// init LED setup

#define timesRepeated 2// number of additional repeats
int displayLength = 25;// length of desired screen pixels
int startingOffset = 3;// screen offset from matrix 0 position
String txt = "HUMAN";// default printed text
int txtLength = txt.length()*6;
int trailingOffset = 5; 
int BLUETOOTH_TX = 7;// connection of Arduino dpin to TX and RX of the Bluetooth module.
int BLUETOOTH_RX = 8; 
SoftwareSerial bluetooth(BLUETOOTH_TX, BLUETOOTH_RX);
int ledpin = 5;// led on D5 will start off
int BluetoothData;// received data
char temp;
String inputString="";
String sentTxt="";
int from0[timesRepeated+1] = {};// distance from desired 0 pos
int nextColorQueue[timesRepeated+1] = {};// display color

const uint16_t colors[] = {
  LED.Color(255, 0, 0), LED.Color(0, 255, 255), LED.Color(255, 0, 255), 
  LED.Color(255, 255, 255), LED.Color(234, 218, 111), LED.Color(0, 22, 255)};

void setup() {  
  LED.begin();
  LED.setTextWrap(false);
  LED.setBrightness(5);
  LED.setFont(&DejaVu_Sans_7);
  bluetooth.begin(9600);
  Serial.println("Enter Text:");
  pinMode(ledpin, OUTPUT);  
  randomSeed(analogRead(0));
  //Setup variable arrays with initial positions/settings
  for (int i = 0; i <= timesRepeated; i++) {
    from0[i] = displayLength+i*(txtLength+trailingOffset);
    nextColorQueue[i] = random(0,sizeof(colors)/sizeof(int));
    while (nextColorQueue[i] == nextColorQueue[(i+timesRepeated)%(timesRepeated+1)]) {
      nextColorQueue[i] = random(sizeof(colors)/sizeof(int));}
  }
}

void loop() {
  LED.fillScreen(0);

  for (int i = 0; i <= timesRepeated; i++) {
    LED.setTextColor(colors[nextColorQueue[i]]);
    LED.setCursor(startingOffset+from0[i], 5);
    LED.print(txt);
    
    if(--from0[i] <= -txtLength-trailingOffset) {// position is offscreen
      from0[i] = from0[(i+timesRepeated)%(timesRepeated+1)]+txtLength+trailingOffset;// set new position
      nextColorQueue[i]=random(0,sizeof(colors)/sizeof(int));// set new color
      while (nextColorQueue[i] == nextColorQueue[(i+timesRepeated)%(timesRepeated+1)]) {// verify color is different from previous
        nextColorQueue[i] = random(0,sizeof(colors)/sizeof(int));}
    }
  }
  
  //Disregard Columns 1-4 & 30-32
  for (int i = 0; i<4*8; i++) {
  LED.setPixelColor( i, LED.Color( 0, 0, 0 ) );
  }
  for (int i = 32*8-1; i>29*8-1; i--) {
  LED.setPixelColor( i, LED.Color( 0, 0, 0 ) );
  }
  
  LED.show();    
  delay(displayLength*1.5);// scrolling speed
  
  if(bluetooth.available()){
    while(bluetooth.available()) {
      char inChar = (char)bluetooth.read();// read the input
      inputString += inChar;// concat provided input
    }
    bluetooth.println("Sent: "+inputString);
    while (bluetooth.available() > 0) {
      temp = bluetooth.read();}// clearing the serial buffer
    if(inputString == "a"){//turn the LED on/off from chars
      digitalWrite(5, HIGH);  
    }else if(inputString == "b"){
      digitalWrite(5, LOW);
    }else if(inputString != "") {
      LED.fillScreen(0);
      txt = inputString;
      txtLength    = txt.length()*6;
      trailingOffset = 5;
      for (int i = 0; i <= timesRepeated; i++) {
        from0[i] = displayLength+i*(txtLength+trailingOffset);
        nextColorQueue[i] = random(0,sizeof(colors)/sizeof(int));
        while (nextColorQueue[i] == nextColorQueue[(i+timesRepeated)%(timesRepeated+1)]) {
          nextColorQueue[i] = random(0,sizeof(colors)/sizeof(int));}
      }
    }
  inputString = "";
  }
}