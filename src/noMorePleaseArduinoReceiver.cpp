#include <Arduino.h>
#include <avr/io.h>

//constant array size
const int ARRAY_SIZE = 8;

//set PH4 as inpiut
const int INPUT_PIN = PH4;

int inputArray[ARRAY_SIZE];


void setup() {
  // Input pin to use input only
  pinMode(INPUT_PIN, INPUT);

  // Start serial
  Serial.begin(9600);
}

void loop() {
  // Read the input from the pin and store it into the input array
  if(digitalRead(INPUT_PIN) == 1){
  for (int i = 0; i < ARRAY_SIZE; i++) {
    inputArray[i] = digitalRead(INPUT_PIN);
    delay(5);
  }

  // Turn input bits into decimal
  int decimalNumber = 0;
  for (int i = 0; i < ARRAY_SIZE; i++) {
    decimalNumber += inputArray[i] * pow(2, ARRAY_SIZE - i - 1);
  }

  // Print the input array and the decimal number to the serial monitor
  Serial.print("Input array: ");
  for (int i = 0; i < ARRAY_SIZE; i++) {
    Serial.print(inputArray[i]);
    Serial.print(" ");
  }
  Serial.print(", Decimal number: ");
  Serial.println(decimalNumber);

  // Wait for 1s before reading the input again
  delay(1000);
  }
}
