int buzzer = A5;
int pot = A4;
int data;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  data = analogRead(pot);
  data = data/4;
  analogWrite(buzzer, data);
}
