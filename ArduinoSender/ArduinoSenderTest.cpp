//STD central sender
//Patrick Brendstrup 17/03/2023
#include <Arduino.h>
#include <avr/io.h>
#include <util/delay.h>


const int profilePin1 = PH3;
const int profilePin2 = PH5;
const int profilePin3 = PH6;
const int profilePin4 = PH7;
const int profilePin5 = PH4;



void setup(){
    Serial.begin(9600);
    pinMode(profilePin1, INPUT);
    pinMode(profilePin2, INPUT);
    pinMode(profilePin3, INPUT);
    pinMode(profilePin4, INPUT);
    pinMode(profilePin5, OUTPUT);

}

// Bytes to send through zero crossing
const uint8_t profile1Value = 0b10000111;
const uint8_t profile2Value = 0b11010101;
const uint8_t profile3Value = 0b11110000;
const uint8_t profile4Value = 0b10001111;
int counter = 0;

void loop() {
    while(1){
      // Loop through each bit in the byte from MSB to LSB
         for (int i = 7; i >= 0; i--) 
         {
          // Set PH4 to HIGH if the current bit is 1
            if (bitRead(profile1Value, i) == 1)
            {
              digitalWrite(PH4, HIGH);
            }

            // Set PH4 to LOW if the current bit is
            else if (bitRead(profile1Value, i) == 0)
            {
              digitalWrite(PH4, LOW);
            }
            

            Serial.print(digitalRead(PH4));
            delay(500);
         }
 }
}
