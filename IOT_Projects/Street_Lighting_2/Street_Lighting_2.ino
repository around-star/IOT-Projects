int led = 13;
int pir_input = 5;
int input = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(pir_input, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  input = digitalRead(pir_input);
  Serial.println(input);
  if (input == 1){
    digitalWrite(led, HIGH);
    delay(2000);
  }
  else{
    digitalWrite(led, LOW);
  }
}
