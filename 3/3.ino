#include <LiquidCrystal_SR_LCD3.h>

const int PIN_LCD_STROBE = 2;
const int PIN_LCD_DATA = 4;
const int PIN_LCD_CLOCK = 3;

LiquidCrystal_SR_LCD3 lcd(PIN_LCD_DATA, PIN_LCD_CLOCK, PIN_LCD_STROBE);

int pressedTime = 0;

int pushButton = 7;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.clear();
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  digitalWrite(pushButton, HIGH);
}

void loop() {
  if (digitalRead(pushButton) == LOW) {
    if (pressedTime == 2) {
      pressedTime = 0;
    } else {
      pressedTime++;
      delay(100);
    }
  }

  if(pressedTime == 1){
    lcd.setCursor(0, 0);
    lcd.print("Aldi Wahyu Saragih");
  } else if (pressedTime == 2) {
    lcd.setCursor(0, 1);
    lcd.print("6706174098");
  } else {
    lcd.clear();
  }
}
