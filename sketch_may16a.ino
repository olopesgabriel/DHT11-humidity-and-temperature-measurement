#define analogic A0
int analog;

void setup() {
  Serial.begin(9600);
  pinMode(analogic, INPUT);
}

void loop() {
  analog = analogRead(analogic);
  Serial.println("valor:");
  Serial.println(analog);

  if(analog > 0 && analog < 400){
    Serial.println("solo umido");
  }
  if(analog > 400 && analog < 800){
    Serial.println("moderado");
  }
  else{
    Serial.println("solo seco");
  }
  delay(1000);
}
