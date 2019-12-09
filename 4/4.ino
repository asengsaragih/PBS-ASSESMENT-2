#include <Keypad.h>

const byte ROWS = 4; //four rows
const byte COLS = 3; //three columns
char keys[ROWS][COLS] = {
  {'1', '2', '3'},
  {'4', '5', '6'},
  {'7', '8', '9'},
  {'*', '0', '#'}
};
byte rowPins[ROWS] = {A1, A2, A3, A4}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {11, 12, 13}; //connect to the column pinouts of the keypad

Keypad keypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

int led = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  char key = keypad.getKey();

  if (key == '0') {
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '1') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '2') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '3') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '4') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '5') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '6') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '7') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '8') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
  if (key == '9') {
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(led, LOW);
    delay(300);
  }
}
