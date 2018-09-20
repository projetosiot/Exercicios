/* Projeto IOT Iluminação Pública
*/

// Definições dos pinos de Entrada e Saída

#define VALOR_ESCURO 400   //Valor da Entrada para ligar LED
#define VALOR_CLARO  600   //Valor da Entrada para desligar LED
int sensorPin = A0;        //Definindo A0 Entrada Analógica     
const int ledPin = D4;     // D4 = GPIO2 LEDBuiltin 

// Definição das variáveis
int analogValue = 0 ;    //Inicializa Variável Valor Entrada Analógica

void setup() {
   
Serial.begin(115200);
pinMode(ledPin, OUTPUT); //Incializa o ledPin  como saída
}

void loop() {
     
   analogValue = analogRead(sensorPin);     //Lendo Entrada Analógica
    if(analogValue<=VALOR_ESCURO)           //Definindo valor para ligar
 {
   digitalWrite(ledPin,LOW);    //Liga LED
 }
 else if(analogValue>=VALOR_CLARO) //Definindo valor para desligar
 {
   digitalWrite(ledPin,HIGH);    //Desliga LED
 }
 
   Serial.print("Valor LDR=");   //Print Valor LDR na Serial
   Serial.println(analogValue);  //Print Valor Entrada Analógica na Serial   

   }
  
