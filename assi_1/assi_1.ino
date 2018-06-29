int sw = 2 ;
int led = 13;
volatile int state = LOW;
volatile int cc=0;
int marker;
int val;
int tempPin = 5;

void setup() {
pinMode(led, OUTPUT);
pinMode(sw, INPUT);
pinMode(tempPin, INPUT);
 Serial.begin (9600);
  attachInterrupt(0, swinterrupt, RISING);
}

void loop() {
  digitalWrite(led, state);
  Serial.println (state); 
if( state == cc)
{marker=0;}
val = analogRead(tempPin);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
Serial.print("TEMPRATURE = ");
Serial.print(cel);
delay(3000);
}
void swinterrupt(){
  
    state!=state;
    cc=state;
   if(marker == 0)
  {
    Serial.println ("Pressed"); 
    marker=1;}
  }
