void setup() {
  pinMode(13, OUTPUT); // configura a porta 13 como saída digital
}

void loop() {
  digitalWrite(13, HIGH); // liga o LED
  delay(1000); // espera por 1 segundo
  digitalWrite(13, LOW); // desliga o LED
  delay(1000); // espera por 1 segundo
}
