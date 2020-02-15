//***************************************/
//Simple instrument gadget program
//***************************************/
int s = 0;
int speaker = 12;
int sounds[] = {262,294,330,349,392,440,494};
int BEATTIME = 100;
void setup() {
  Serial.begin(9600);
  pinMode(0,INPUT);
  pinMode(1,INPUT);
}

void loop() {
  s = analogRead(0);
  int p = analogRead(1);
  //Reset the sound
  noTone(12);
  
  if(550 < s){
    tone(speaker,sounds[0],BEATTIME);
  }
  else if(530 < s){
    tone(speaker,sounds[1],BEATTIME);
  }
  else if(510 < s){
    tone(speaker,sounds[2],BEATTIME);
  }
  else if(490 < s){
    tone(speaker,sounds[3],BEATTIME);
  }
  else if(470 < s){
    tone(speaker,sounds[4],BEATTIME);
  }
  else if(450 < s){
    tone(speaker,sounds[5],BEATTIME);
  }
  else if(430 < s){
    tone(speaker,sounds[6],BEATTIME);
  }
  else if(200 < s){
    tone(speaker,sounds[7],BEATTIME);
  }
  delay(100);
  Serial.println(s);
  Serial.println(p);
}
