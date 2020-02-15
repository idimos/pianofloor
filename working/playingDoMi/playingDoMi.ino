//***************************************/
//Program 2 for generating sound using the tone function
//***************************************/
#define BEATTIME 100 //Length of the generated tone (msec)
#define SPEAKER 12 //Pin number of the speaker
 
void setup() {
}

void loop() {
  tone(SPEAKER,262,BEATTIME) ; // Do
  tone(SPEAKER,330,BEATTIME) ; // Mi
  delay(BEATTIME) ;
}
