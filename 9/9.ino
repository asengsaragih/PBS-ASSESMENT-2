int buzzer = A5;
int tombol1 = 7;
int tombol2 = 5;
int led = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(tombol1, INPUT);
  pinMode(tombol2, INPUT);

  digitalWrite(tombol1, HIGH);
  digitalWrite(tombol2, HIGH);

  pinMode(buzzer, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(tombol1) == LOW) {
    buzzerFunc();
  }

  if (digitalRead(tombol2) == LOW) {
    ledFunc();
  }
}

void ledFunc() {
  for (int i = 0; i <= 255; i += 5) {
    analogWrite(led, i);
  }
  delay(200);
  for (int i = 255; i >= 0; i -= 5) {
    analogWrite(led, i);
  }
  delay(200);
}

void buzzerFunc() {
  digitalWrite(buzzer, HIGH);
  delay(500);
  digitalWrite(buzzer, LOW);
}
