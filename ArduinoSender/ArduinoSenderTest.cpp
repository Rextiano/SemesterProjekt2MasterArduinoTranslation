//STD central sender
//Patrick Brendstrup 17/03/2023
#include <Arduino.h>
#include <avr/io.h>
#include <util/delay.h>

const int fallingEdgePin = PH2; //Falling edge pin for zero crossing
const int profilePin1 = PH3; // Profile 1-4 pin picks
const int profilePin2 = PH5;
const int profilePin3 = PH6;
const int profilePin4 = PH7;
const int outputPin = PH4; // Output Pin



void setup(){
    Serial.begin(9600);
    pinMode(profilePin1, INPUT);
    pinMode(profilePin2, INPUT);
    pinMode(profilePin3, INPUT);
    pinMode(profilePin4, INPUT);
    pinMode(outputPin, OUTPUT);
}

// Bytes to send through zero crossing
const uint8_t profile1Value = 0b10000111;
const uint8_t profile2Value = 0b11010101;
const uint8_t profile3Value = 0b11110000;
const uint8_t profile4Value = 0b10001111;
int counter = 0;
int fallingEdgeCheck;


void loop() {
     while(1){

      uint8_t chosenProfile;
      
       if (1){
        if (profilePin1 == 1){
          chosenProfile = profile1Value;
          break;
        }
        if (profilePin2 == 1){
          chosenProfile = profile2Value;
          break;
        }
        if (profilePin3 == 1){
          chosenProfile = profile3Value;
          break;
        }
        if (profilePin4 == 1){
          chosenProfile = profile4Value;
          break;
        }
      }
     

      //Checks current status of PH3 falling edge check and prints
      fallingEdgeCheck = digitalRead(fallingEdgePin);
      Serial.println(fallingEdgeCheck);

      // Only send after receveing a 0 on PH3
      if(fallingEdgeCheck == 0){

      // Loop through each bit in the byte from MSB to LSB
        Serial.print("Byte sent: ");
          for (int i = 7; i >= 0; i--) {
          

          // Set PH4 to HIGH if the current bit is 1
            if (bitRead(chosenProfile, i) == 1)
            {              
            digitalWrite(outputPin, HIGH);
            delay(100);
            }

            // Set PH4 to LOW if the current bit is
            if (bitRead(profile1Value, i) == 0)
            {
            digitalWrite(outputPin, LOW);
            delay(100);
            }
            

            Serial.print(digitalRead(outputPin));
            
            //delay(5);
          }
          Serial.println(" ");
          Serial.print("Time since start: ");
          Serial.print(micros());
          Serial.println(" ");
          Serial.print(chosenProfile);
          break;
    }
 }
}
