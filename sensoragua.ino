const int entrada = A0;  // Analog input pin that the potentiometer is attached to
int valorSensor = 0;        // value read from the pot
int lectura = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i <= 19; i++) {
    lectura = analogRead(entrada);
    valorSensor = valorSensor + lectura;
    delay(5);
  }
  
  valorSensor = (int) (valorSensor / 20);
  if (valorSensor > 400) {
    valorSensor = 1000;
  }else{
    valorSensor=0;
  }
  valorSensor=1000-valorSensor;
  Serial.print("valor = ");
  Serial.println(valorSensor);
}
