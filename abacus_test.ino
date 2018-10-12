//Onboard LED counts up to 9. at 10, Onboard LED resets to 0, and adds 1 to onboard Neopixel count

#include <Adafruit_NeoPixel.h>

#define PIN 8

Adafruit_NeoPixel strip = Adafruit_NeoPixel(1, PIN, NEO_GRB + NEO_KHZ800);


const int buttonPin = 9;
const int ledPin = 7;

int onesCount = 0;
int tensCount = 0;
int hundredsCount = 0;
int buttonState = 0;
int buttonStateLast = 0;

long count1 = 0;
long count10 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //begins serial communication
  strip.begin();
  strip.setBrightness(50);
  strip.show(); // Initialize all pixels to 'off'

  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonStateLast = buttonState;
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && buttonStateLast == LOW) {
    onesCount++;
    Serial.print("onesCount: ");
    Serial.println(onesCount);
    if (onesCount >= 10) {
      onesCount = 0;
      tensCount++;
    }
    if (tensCount >= 10) {
      tensCount = 0;
      hundredsCount++;
    }
  }

//these comments are me trying to optimize the code below and failing
//do this per # of buttons presses (onesCount)
//  for (int i = 0; i < onesCount; i++) {
//    //do this every # of count (void loop()s)
//    for (int j = 0; j <= count1; j++) {
//      if (count1 % 500 == 0 && count1 % 1000 != 0){
//        digitalWrite(ledPin, LOW);
//      }
//      else if (count1 % 1000 == 0) {
//        digitalWrite(ledPin, HIGH);
//      }
//      Serial.print("i: ");
//      Serial.println(i);
//      }
//  }
//  if (count1 >= (onesCount*500)+2000+(500*onesCount)) {
//    count1 = -1;
//  }
  
  if(onesCount == 0){
    digitalWrite(ledPin, LOW);
  }
  
  if(onesCount == 1)
  {
     if (count1 == 0) {
       digitalWrite(ledPin, HIGH);
     }
     if (count1 >= 500) {
       digitalWrite(ledPin, LOW);
     }

     if (count1 >= 2500) {
       count1 = -1;
     }
  }
  
  if (onesCount == 2) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 3500) {
      count1 = -1;
    }
  }

  if (onesCount == 3) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 2000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 2500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 4500) {
      count1 = -1;
    }
  }

  if (onesCount == 4) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 2000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 2500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 3000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 3500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 5500) {
      count1 = -1;
    }
  }

  if (onesCount == 5) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 2000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 2500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 3000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 3500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 4000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 4500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 6500) {
      count1 = -1;
    }
  }

  if (onesCount == 6) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 2000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 2500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 3000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 3500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 4000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 4500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 5000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 5500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 7500) {
      count1 = -1;
    }
  }
  
  if (onesCount == 7) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 2000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 2500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 3000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 3500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 4000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 4500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 5000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 5500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 6000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 6500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 8500) {
      count1 = -1;
    }
  }

  if (onesCount == 8) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 2000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 2500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 3000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 3500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 4000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 4500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 5000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 5500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 6000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 6500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 7000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 7500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 9500) {
      count1 = -1;
    }
  } 

  if (onesCount == 9) {
    if (count1 == 0 ) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 1000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 1500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 2000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 2500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 3000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 3500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 4000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 4500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 5000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 5500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 6000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 6500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 7000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 7500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 8000) {
      digitalWrite(ledPin, HIGH);
    }
    if (count1 >= 8500) {
      digitalWrite(ledPin, LOW);
    }
    if (count1 >= 10500) {
      count1 = -1;
    }
  } 
  
  if (onesCount >= 10) {
    onesCount = 0;
    tensCount++;
  }

  if (tensCount == 0) {
    strip.setBrightness(0);
    colorWipe(strip.Color(0, 255, 0), 0);
  }
  if (tensCount == 1) {
     if (count10 == 0) {
      strip.setBrightness(20);
      colorWipe(strip.Color(0, 255, 0), 50);
     }
     if (count10 >= 500) {
       strip.setBrightness(0);
       colorWipe(strip.Color(0, 255, 0), 0);
     }

     if (count10 >= 2500) {
       count10 = -1;
     }
  }
  
  Serial.print("count1: ");
  Serial.println(count1);
  Serial.print("onescount: ");
  Serial.println(onesCount);
  Serial.print("tensCount: ");
  Serial.println(tensCount);
    count1++;
    count10++;
  }



void colorWipe(uint32_t c, uint8_t wait) {
  for(uint16_t i=0; i<strip.numPixels(); i++) {
      strip.setPixelColor(i, c);
      strip.show();
      delay(wait);
  }
}
