int led_r = 11;
int led_b = 10;
int led_g = 9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  RGB_colour(139,0,255);//violet
  delay(1000);

  RGB_colour(46,43,95);//indigo
  delay(1000);

  RGB_colour(0,0,255);//blue
  delay(1000);

  RGB_colour(0,255,0);//green
  delay(1000);

  RGB_colour(255,255,0);//yellow
  delay(1000);

  RGB_colour(255,127,0);//orange
  delay(1000);

  RGB_colour(255,0,0);//red
  delay(1000);
}

void RGB_colour(int red_intensity, int green_intensity, int blue_intensity){

  analogWrite(led_r, red_intensity);
  analogWrite(led_g, green_intensity);
  analogWrite(led_b, blue_intensity);
  
}
