int motor = 13;
int trig = 4;
int echo = 5;
int duration;
int distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motor, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration/2)/29.1;
  Serial.println(distance);
  if (distance <=50){
    digitalWrite(motor, HIGH);
  }
  else{
    digitalWrite(motor, LOW);
  }
}
