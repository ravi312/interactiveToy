#include <Adafruit_CircuitPlayground.h>
#include "pitches.h"

int melody[] = {                            // specific notes in the melody
  NOTE_A4,NOTE_C4,NOTE_D4,NOTE_E4,NOTE_G4 };

void setup() {
  CircuitPlayground.begin();  // initialize the CP library
  CircuitPlayground.strip.setBrightness(20); 
  Serial.begin(9600);
  pinMode(10,OUTPUT);
}

void loop() {
  int soundValue=CircuitPlayground.mic.soundPressureLevel(10);
  int lightValue = CircuitPlayground.lightSensor();
  //digitalWrite(10,HIGH);
  if(lightValue<10){
    pokemonSong1();
      
  }
  if(lightValue>300){
    pattern2();
  }
  
  if(CircuitPlayground.rightButton() || CircuitPlayground.leftButton()) {   // play when we press the right button
      pokemonSong();
  }

  
  if (soundValue>65){
    pattern2();    
  }

  
  Serial.print("sound = ");
  Serial.println(soundValue);
  Serial.print("light = ");
  Serial.println(lightValue);

}
  
void pokemonSong1(){
   blinkHands();
   digitalWrite(10,HIGH);
    delay(100);
  CircuitPlayground.setBrightness(50);
  CircuitPlayground.setPixelColor(0, 250, 0, 0);
  CircuitPlayground.setPixelColor(1, 230, 0, 0);
  CircuitPlayground.setPixelColor(2, 210, 0, 0);
  CircuitPlayground.setPixelColor(3, 190, 0, 0);
  CircuitPlayground.setPixelColor(4, 170, 0, 0);
  CircuitPlayground.setPixelColor(5, 150, 0, 0);
  CircuitPlayground.setPixelColor(6, 130, 0, 0);
  CircuitPlayground.setPixelColor(7, 110, 0, 0);
  CircuitPlayground.setPixelColor(8, 90, 0, 0);
  CircuitPlayground.setPixelColor(9, 70, 0, 0);


  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 250);
  delay(20);
  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[4], 200);
  delay(20);
  CircuitPlayground.playTone(melody[3], 100);
  delay(10);
  CircuitPlayground.playTone(melody[1], 500);
  delay(10);

  CircuitPlayground.playTone(melody[1], 100);
  delay(10);
  CircuitPlayground.playTone(melody[2], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 200);
  delay(20);
  CircuitPlayground.playTone(melody[0], 200);
  delay(10);
  CircuitPlayground.playTone(melody[4], 100);
  delay(10);
  CircuitPlayground.playTone(melody[3], 100);
  delay(10);
  CircuitPlayground.playTone(melody[4], 200);
  delay(10);
  digitalWrite(10,LOW);
    delay(100);
  CircuitPlayground.clearPixels();
    
}



void pattern1(){
  
  CircuitPlayground.setBrightness(50);
  CircuitPlayground.setPixelColor(0, 100, 200, 20);
  delay(1000);
  //CircuitPlayground.clearPixels();
  //CircuitPlayground.clearPixels();
  CircuitPlayground.clearPixels();
  CircuitPlayground.setPixelColor(1, 100, 0, 40);
}

void pattern2(){
  // LEDs switches on in a chain
  CircuitPlayground.setBrightness(50);
  CircuitPlayground.setPixelColor(0, 250, 0, 0);
  delay(50);
  CircuitPlayground.setPixelColor(1, 0, 250, 0);
  delay(50);
  CircuitPlayground.setPixelColor(2, 0, 0, 255);
  delay(50);
  CircuitPlayground.setPixelColor(3, 255, 0, 0);
  delay(50);
  CircuitPlayground.setPixelColor(4, 0, 255, 0);
  delay(50);
  CircuitPlayground.setPixelColor(5, 0, 0, 255);
  delay(50);
  CircuitPlayground.setPixelColor(6, 255, 0,0 );
  delay(50);
  CircuitPlayground.setPixelColor(7, 0, 255, 0);
  delay(50);
  CircuitPlayground.setPixelColor(8, 0, 0, 2550);
  delay(50);
  CircuitPlayground.setPixelColor(9, 255, 0, 0);
  delay(50);
  CircuitPlayground.clearPixels();
  
}

void pattern3(){
   // one led blinks at a time
  CircuitPlayground.setBrightness(50);
  CircuitPlayground.setPixelColor(0, 250, 0, 0);
  delay(50);
  CircuitPlayground.setPixelColor(0, 0, 0, 0);
  delay(50);

  CircuitPlayground.setPixelColor(1, 0, 250, 0);
  delay(50);
  CircuitPlayground.setPixelColor(1, 0, 0, 0);
  delay(50);

  CircuitPlayground.setPixelColor(2, 0, 0, 255);
  delay(50);
  CircuitPlayground.setPixelColor(2, 0, 0, 0);
  delay(50);

  CircuitPlayground.setPixelColor(3, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(3, 0, 0, 0);
  delay(50);

  CircuitPlayground.setPixelColor(4, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(4, 0, 0, 0);
  delay(50);

  CircuitPlayground.setPixelColor(5, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(5, 0, 0, 0);
  delay(50);

  CircuitPlayground.setPixelColor(6, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(6, 0, 0, 0);
  delay(50);
  

  CircuitPlayground.setPixelColor(7, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(7, 0, 0, 0);
  delay(50);
  
  CircuitPlayground.setPixelColor(8, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(8, 0, 0, 0);
  delay(50);
  
  CircuitPlayground.setPixelColor(9, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(9, 0, 0, 0);
  delay(50);
  
  CircuitPlayground.clearPixels();
  
}


void pokemonSong(){
  
  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 250);
  delay(20);
  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 100);
  delay(10);
  CircuitPlayground.playTone(melody[4], 200);
  delay(20);
  CircuitPlayground.playTone(melody[3], 100);
  delay(10);
  CircuitPlayground.playTone(melody[1], 500);
  delay(10);

  CircuitPlayground.playTone(melody[1], 100);
  delay(10);
  CircuitPlayground.playTone(melody[2], 100);
  delay(10);
  CircuitPlayground.playTone(melody[0], 200);
  delay(20);
  CircuitPlayground.playTone(melody[0], 200);
  delay(10);
  CircuitPlayground.playTone(melody[4], 100);
  delay(10);
  CircuitPlayground.playTone(melody[3], 100);
  delay(10);
  CircuitPlayground.playTone(melody[4], 200);
  delay(10);
    
}


void blinkHands()
{
  for(int i=0; i<10; i++){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(100);
  }
}
