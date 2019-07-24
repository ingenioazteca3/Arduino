void setup() {
  // Código de inicialización:
  pinMode(LED_BUILTIN,OUTPUT); // Configura el Pin donde está el LED conectado como salida
}

void loop() {
  // Código Principal:
  digitalWrite(LED_BUILTIN, HIGH); // Prende el LED
  delay(500);                      // Espera medio segundo, 500 msec
  digitalWrite(LED_BUILTIN, LOW);  // Apaga el LED
  delay(500);                      // Espera medio segundo, 500 msec
  // Vuelve a ejecutar el Código Principal
}
