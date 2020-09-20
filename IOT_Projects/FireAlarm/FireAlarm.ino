int led = 13;
int tmp = A0;
int gas = A1;
int motor = 10;
double temp_input;
int gas_input;
long previousmils = 0;
long currentmils = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(tmp, INPUT);
  pinMode(gas, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  temp_input = (double)analogRead(tmp) / 1024;
  temp_input = ((temp_input*5) - 0.5) * 100.0;
  gas_input = analogRead(gas);
  //Serial.println(temp_input);
  
  currentmils = millis();
  if ((temp_input > 60) || (gas_input > 2000)){
     
    Serial.println(currentmils - previousmils);
    
    digitalWrite(led, HIGH);
    if ((temp_input > 65) || (gas_input > 2200)){
      if ((currentmils - previousmils) <= 6000){
        digitalWrite(motor, HIGH);
        
      }
    }
    else{
      digitalWrite(motor, LOW);
    }
  }
  else{
    previousmils = currentmils;
    digitalWrite(led, LOW);
  }
}
