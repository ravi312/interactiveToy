#include <Adafruit_CircuitPlayground.h>

float X, Y, Z;
int count=0;
void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  CircuitPlayground.strip.setBrightness(20); 
}

void loop() {
  X = CircuitPlayground.motionX();
  Y = CircuitPlayground.motionY();
  Z = CircuitPlayground.motionZ();
  blinkLight(X,Y,Z);
  delay(300);
}

void blinkLight(float x, float y, float z){
  if (count>9){
    CircuitPlayground.clearPixels();
    count=0;
  }
  x=x*1000;
  y=y*1000;
  z=z*1000;

  Serial.print("x: ");
  Serial.print(x);
  Serial.print("  y: ");
  Serial.print(y);
  Serial.print("  z: ");
  Serial.println(z);

  // F Red

  if (z<-2500  ){
    CircuitPlayground.setBrightness(50);
    CircuitPlayground.setPixelColor(count, 250, 0, 0);
    Serial.print("  Here is the current value of z is: ");
    Serial.println(z);
    delay(2000);
    count++;
  }
  
  // B Green

  if (z>1500 ){
    CircuitPlayground.setBrightness(50);
    CircuitPlayground.setPixelColor(count, 0, 250, 0);
    Serial.print("  Here is the current value of z is: ");
    Serial.println(z);
    delay(2000);
    count++;
  }
  
  // L turn Purple
/*
  if (x>2500){
    CircuitPlayground.setBrightness(50);
    CircuitPlayground.setPixelColor(count, 0, 0, 250);
    Serial.print("  Here is the current value of x is: ");
    Serial.println(x);
    delay(4000);
    count++;
  }
  

  // R turn Yellow
  if (x<700 ){
    CircuitPlayground.setBrightness(50);
    CircuitPlayground.setPixelColor(count, 100, 150,0 );
    Serial.print("  Here is the current value of x is: ");
    Serial.println(x);
    delay(4000);
    count++;
  }
  */
}