int sensorPin=A0;
int sensorValue = 200;
int led = 12;
void setup() {
 pinMode(led, OUTPUT);
 Serial.begin(9600);
 // put your setup code here, to run once:
}
void loop() {
 sensorValue = analogRead(sensorPin);
 Serial.println(sensorValue);
 if(sensorValue < 350)
 {
   //Serial.println("LED light on");
   digitalWrite(led,HIGH);
 }
 else{
 digitalWrite(led,LOW);
 }
 // put your main code here, to run repeatedly:
}
