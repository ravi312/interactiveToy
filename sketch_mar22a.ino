
#include <Adafruit_CircuitPlayground.h>

void setup() {
  // put your setup code here, to run once:
  CircuitPlayground.begin();
  CircuitPlayground.strip.setBrightness(20); 
  Serial.begin(9600);
}

void loop() {
if(CircuitPlayground.leftButton()) {   // if reading the left button returns true
    CircuitPlayground.playTone(440,100);    // output a 440 Hz sound for a tenth of a second
  }
  else if(CircuitPlayground.rightButton()) { // if reading the right button returns true
    CircuitPlayground.playTone(1760,100);   // output a 1760 Hz sound for a tenth of a second                    
  }
  /*
  int sensorValue = CircuitPlayground.lightSensor();
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(sensorValue);
  delay(5);
  if(sensorValue<50){
    pattern3();
  }
  else if(sensorValue>300){
    pattern2();
  }
  else{
    pattern1();
  }
*/
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
  CircuitPlayground.setPixelColor(3, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(4, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(5, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(6, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(7, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(8, 100, 0, 40);
  delay(50);
  CircuitPlayground.setPixelColor(9, 100, 0, 40);
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