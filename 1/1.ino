int led3 = 6;
int led2 = 10;
int led1 = 11;
int pushButton = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pushButton, INPUT);

  digitalWrite(pushButton, HIGH);

//  digitalWrite(led1, HIGH);
//  digitalWrite(led2, HIGH);
//  digitalWrite(led3, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(pushButton) == LOW) {
    for (int i = 0; i <= 255; i+=5) {
      analogWrite(led1, i);
      analogWrite(led2, i);
      analogWrite(led3, i);

      delay(100);
    }

    for (int i = 255; i >= 0; i-=5) {
      analogWrite(led1, i);
      analogWrite(led2, i);
      analogWrite(led3, i);

      delay(100);
    }
  }
}
