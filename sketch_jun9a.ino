const int wPin = 8; // Entrada W
const int xPin = 9; // Entrada X 
const int yPin = 10; // Entrada Y 
const int zPin = 11; // Entrada Z 

void setup() {
  // Entradas
  pinMode(wPin, OUTPUT);
  pinMode(xPin, OUTPUT);
  pinMode(yPin, OUTPUT);
  pinMode(zPin, OUTPUT);
}

void loop() {
  // Inicializar el contador
  int count = 0;

  while (count <= 15) {
    // Convertir contador a binario
    String binaryString = String(count, BIN);

    // Rellenar para que tenga 4 ceros a la izquierda
    while (binaryString.length() < 4) {
      binaryString = "0" + binaryString;
    }

    // Mandar los pulsos 
    digitalWrite(wPin, binaryString[0] == '1' ? HIGH : LOW);
    digitalWrite(xPin, binaryString[1] == '1' ? HIGH : LOW);
    digitalWrite(yPin, binaryString[2] == '1' ? HIGH : LOW);
    digitalWrite(zPin, binaryString[3] == '1' ? HIGH : LOW);

    // Delay 1 segundo
    delay(1000);

    // Incrementar el contador
    count++;
  }
}