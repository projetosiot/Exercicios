/*
  Exercicio 01 - 2018
  IOT na prática com o ESP8266

*/


// Definições dos pinos de Entrada e Saída
const int buttonPinOff = D1;     // D1 = GPIO5 (General Purpose Input/Output) 
const int buttonPinOn = D3;     // D3 = GPIO0 (General Purpose Input/Output) 
const int ledPin =  D4;      // D4 = GPIO2 LEDBuiltin (Cuidado GPIO 16 nao tem esta funcao)

// Definição das variáveis
int buttonStateOff = 0;         // Inicializa a variárel do estado do pushbutton como 0
int buttonStateOn = 0;         // Inicializa a variárel do estado do pushbutton como 0

void setup() {

  pinMode(ledPin, OUTPUT); // Incializa o ledPin  como saída
  pinMode(buttonPinOff, INPUT_PULLUP); // Incializa o buttonPin  como entrada (Precisa Resistor de PULLUP)
  pinMode(buttonPinOn, INPUT_PULLUP); // Incializa o buttonPin  como entrada (Precisa Resistor de PULLUP)

   // Apaga o led no Setup
   digitalWrite(ledPin, LOW);

  
}

void loop() {
  // Leitura do estado do valor do pushbutton
  buttonStateOff = digitalRead(buttonPinOff);
  buttonStateOn = digitalRead(buttonPinOn);

  // Verifica se o pushbutton está pressionado, se for HIGH:
  if (buttonStateOn == LOW) {
    // Liga o Led (Depende da ligação):
    digitalWrite(ledPin, HIGH);
  }
  if (buttonStateOff == LOW)  {
    // Apaga o led
    digitalWrite(ledPin, LOW);
  }
}
