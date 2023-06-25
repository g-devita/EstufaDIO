// C++ code
//
void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  Serial.println(analogRead(A0));
  if (analogRead(A0) >= 30) {
    digitalWrite(11, HIGH);
  }
  if (analogRead(A0) >= 50) {
    digitalWrite(5, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}