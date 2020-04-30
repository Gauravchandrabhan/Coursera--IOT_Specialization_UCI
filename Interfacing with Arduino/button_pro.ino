int button1 = 2;
int button2 = 3;
int ledpin = 13;
int state1 = 0, state2 = 0;
void setup() {
  pinMode (ledpin, OUTPUT);
  pinMode (button1, INPUT);
  pinMode (button2, INPUT);

}

void loop() {
  state1 = digitalRead (button1);
  state2 = digitalRead (button2);

  if (state1 == HIGH || state2 == HIGH){
    digitalWrite(ledpin, HIGH);
  } else {
    digitalWrite(ledpin, LOW);
  }
  }
