#define pinLedVermelho 13
#define pinLedAmarelo 12
#define pinLedVerde 11
#define pinLedAzul 10
#define pinLedLaranja 9

void setup()
{
  Serial.begin(9600);
  
  pinMode(pinLedVermelho, OUTPUT);
  pinMode(pinLedAmarelo, OUTPUT);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinLedAzul, OUTPUT);
  pinMode(pinLedLaranja, OUTPUT);
  
  int AR = 4;
  
  switch (AR)
 {
 
  case 0:
  digitalWrite(pinLedVermelho, HIGH);
  Serial.println("Pessimo");
  break;
  
  case 1:
  digitalWrite(pinLedAmarelo, HIGH);
  Serial.println("Ruim");
  break;
  
  case 2:
  digitalWrite(pinLedVerde, HIGH);
  Serial.println("Normal");
  break;
  
  case 3:
  digitalWrite(pinLedAzul, HIGH);
  Serial.println("Boa");
  break;
  
  case 4:
  digitalWrite(pinLedLaranja, HIGH);
  Serial.println("Excelente");
  break;
  
  default:
  Serial.println("ERRO");
  
} 

}

void loop()
{
 
}