int rly = 8;
int tmp = A0;
int sensor_input;
double temp;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rly, OUTPUT);
  pinMode(tmp, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor_input = analogRead(tmp);
  temp = (double)sensor_input/1024;
  temp = ((temp * 5) - 0.5) * 100.0;
  Serial.println(temp);
  if (temp > 35){
    digitalWrite(rly, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(rly, LOW);
  }
}
