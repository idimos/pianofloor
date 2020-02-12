const int doPin = A0;
const int rePin = A1;
const int redPin = 2;

int doNote = 0;
int reNote = 0;

void setup() {
  Serial.begin(9600);
  pinMode(redPin,OUTPUT);
  digitalWrite(doPin, HIGH);
  digitalWrite(rePin, HIGH);
  digitalWrite(redPin,LOW);
}

void loop() {
  doNote = analogRead(doPin);
//  reNote = analogRead(rePin);

  Serial.print("DO = ");
  Serial.println(doNote);

  if (doNote < 700) {
    digitalWrite(redPin, 1);
    delay(0);
  } else {
    digitalWrite(redPin,0);
  }
//  Serial.print(", Re = ");
//  Serial.println(reNote);
//  digitalWrite(redPin,HIGH);
//  delay(40);
//  digitalWrite(redPin,LOW);
//  delay(40);
}
