int led[] = {2, 3, 4, 5, 6, 7};
int i= 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for ( i=0; i<6; i++){
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<6; i++){
    digitalWrite(led[i], HIGH);
    delay(300);
    digitalWrite(led[i], LOW);
    delay(300);
  }

  for (int i=5; i>=0; i--){
    digitalWrite(led[i], HIGH);
    delay(300);
    digitalWrite(led[i], LOW);
    delay(300);

  }
}
