const int ledPin = 12;
const int analogInPin = A0; 
const int analogInPin2 = A5; 
int fabricValue = 0;
int threshold = 500;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(analogInPin, HIGH);
  digitalWrite(analogInPin2, HIGH);
  delay(1000);
}

void loop() {
  fabricValue = analogRead(analogInPin);
  if (fabricValue < 678){
    Serial.print("DO = ");
    Serial.println(fabricValue);
  }
  fabricValue = analogRead(analogInPin2);
  if (fabricValue < 678){
    Serial.print("RE = ");
    Serial.println(fabricValue);
  }
//  if (fabricValue < 678){
//    digitalWrite(ledPin, 1);
//    delay(150);
//    digitalWrite(ledPin, 0);
//  }
}
