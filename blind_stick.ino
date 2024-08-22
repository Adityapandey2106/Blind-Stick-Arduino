int buzz = 6;
int trigPin= 9; 
int echoPin=10;
long duration, cm, inches; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(trigPin,OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buzz,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin, LOW);
delayMicroseconds(50);
digitalWrite(trigPin, HIGH);
delayMicroseconds(100);
digitalWrite(trigPin, LOW);
//store the time in variable duration
duration=pulseIn(echoPin, HIGH);
cm = (duration/2) / 29.1;
Serial.print("cm:");
Serial.println(cm);
if(cm<50)
{
  digitalWrite(buzz,1);
}
else
{
  digitalWrite(buzz,0);
}
}
