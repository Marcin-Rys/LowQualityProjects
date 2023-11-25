//little project writed 1h before christmas eve to make my LED hoodie blinking at the feast ;)

//int for leds, in my setup there was some blue/green(led 1,3,5) and red(led 2,4,6).
int led1 = 6;
int led2 = 7;
int led3 = 8;
int led4 = 9;
int led5 = 10;
int led6 = 11;

//changing period from millis to efficient human readable format
int period15sec = 15000;
int period015sec = 1500;
int period1sec = 1000;
int period05sec = 500;
int period01sec = 100;
unsigned long time_now = 0;

void setup() {
//setting arduino pins as output, writing main red LED at the top of the christmas tree to be always on.
pinMode(led1 ,OUTPUT);
pinMode(led2 ,OUTPUT);
pinMode(led3 ,OUTPUT);
pinMode(led4 ,OUTPUT);
pinMode(led5 ,OUTPUT);
pinMode(led6 ,OUTPUT);
digitalWrite(led1, HIGH);
}

void loop() {
//loop to go through all of the styles of blinking for defined amount of time.
for (int i = 0; i < 5; i++){
  StyleWave();
  }
  StyleAllOn();
  for (int i = 0; i < 3; i++){
  StyleBlinkingAlternately();
  }
  StyleAllOn();
  for (int i = 0; i < 5; i++){
  StyleWaveBlinking();
  }
  for (int i = 0; i < 4; i++){
  StyleHalfOn(); //All leds on, then shut only one color
  }
  for (int i = 0; i < 30; i++){
  StyleBlinking(); //just blinking on and off all leds

  }
  
}
//all leds off
void StyleAllOff(){
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
}
//all leds on
void StyleAllOn(){
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
 
}


//Half of the LEDS(in my case red ones) will shut down, then go up after 700ms delay.
void StyleHalfOn(){
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  delay(700);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  delay(700);
}

//blinking like an ocean wave...
void StyleWave(){
  StyleAllOff();
  digitalWrite(led2, HIGH);
  delay(700);
  digitalWrite(led3, HIGH);
  delay(700);
  digitalWrite(led4, HIGH);
  delay(700);
  digitalWrite(led5, HIGH);
  delay(700);
  digitalWrite(led6, HIGH);
  delay(700);
  digitalWrite(led6, LOW);
  delay(700);
  digitalWrite(led5, LOW);
  delay(700);
  digitalWrite(led4, LOW);
  delay(700);
  digitalWrite(led3, LOW);
  delay(700);
  digitalWrite(led2, LOW);
  delay(700);
}

//just basic on and off blinking
void StyleBlinking(){
  StyleAllOn();
  delay(400);
  StyleAllOff();
  delay(400);
}

//blinking but with fever leds at the same time.
void StyleBlinkingAlternately(){
  digitalWrite(led2, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  delay(900);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  delay(900);
}

//first make wave, then blink several times.
void StyleWaveBlinking(){
  StyleAllOff();
  digitalWrite(led2, HIGH);
  delay(700);
  digitalWrite(led3, HIGH);
  delay(700);
  digitalWrite(led4, HIGH);
  delay(700);
  digitalWrite(led5, HIGH);
  delay(700);
  digitalWrite(led6, HIGH);
  delay(300);
  StyleAllOff();
  delay(300);
  StyleAllOn();
  delay(300);
  StyleAllOff();
  delay(300);
  StyleAllOn();
  delay(300);
  StyleAllOff();
  delay(300);
  StyleAllOn();
  delay(300);
}
