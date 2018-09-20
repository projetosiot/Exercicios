/*  Software para controle do Tempo de Pisca do LED */

float tempo = 0;        //Valor Tempo do led 
int sensorPin = A0;     //Definindo A0 Entrada Analógica       
const int ledPin = D4;   // D4 = GPIO2 LEDBuiltin
int analogValue = 0 ;   //Inicializa Variável Valor Entrada Analógica

void setup() {   
Serial.begin(115200);    //Inicializa a serial
pinMode(ledPin, OUTPUT); //Incializa o ledPin  como saída
}

void loop() {
       
  Serial.print("Valor LDR em % =");      //Print Valor LDR em Porcentagem na Serial
  Serial.println(analogValue*100.0/1023.0);  //Print Valor em % da Entrada Analógica LDR na Serial
  analogValue = analogRead(sensorPin);   //Lendo Entrada Analógica
  tempo = map(analogValue, 0, 1023, 0.0, 2000.0);   //Converte e atribui para a variavel "tempo" o valor lido no LDR 
  Serial.print("Valor tempo em seg =");      //Print Valor LDR em Porcentagem na Serial
  Serial.println(tempo/1000.0);  //Print Valor em % da Entrada Analógica LDR na Serial     
  analogWrite(ledPin, LOW);    //Liga LED
  delay(tempo);                //Tempo Ligado
  analogWrite(ledPin,HIGH);    //Desliga LED
  delay(tempo);               //Tempo Desligado

}

 
