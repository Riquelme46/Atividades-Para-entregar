/*
//Autor:Riquelme Lopes
//Nome do arquivo: Semaforo sem (delay)
//Data:10/03/2025
//Descrição: Funcionalidade sem delay
*/

#define LedVermelho 13
#define LedAmarelo 12
#define LedVerde 11


unsigned long tempoAnterior = 0; 
int estadoSemaforo = 0;          


void setup()
{
  pinMode(LedVermelho, OUTPUT);
  pinMode(LedAmarelo, OUTPUT);
  pinMode(LedVerde, OUTPUT);
  
}

void loop() {

  unsigned long tempoAtual = millis();

  switch (estadoSemaforo) {
        case 0: //  Vermelho (5s)
            if (tempoAtual - tempoAnterior >= 5000) {
                digitalWrite(LedVermelho, LOW);
                digitalWrite(LedVerde, HIGH);
                estadoSemaforo = 1;
                tempoAnterior = tempoAtual;
            } else {
                digitalWrite(LedVermelho, HIGH);
                digitalWrite(LedVerde, LOW);
                digitalWrite(LedAmarelo, LOW);
            }
            break;

        case 1: // Verde (5s)
            if (tempoAtual - tempoAnterior >= 5000) {
                digitalWrite(LedVerde, LOW);
                digitalWrite(LedAmarelo, HIGH);
                estadoSemaforo = 2;
                tempoAnterior = tempoAtual;
            }
            break;

        case 2: // Amarelo (2s)
            if (tempoAtual - tempoAnterior >= 2000) {
                digitalWrite(LedAmarelo, LOW);
                digitalWrite(LedVermelho, HIGH);
                estadoSemaforo = 0;
                tempoAnterior = tempoAtual;
            }
            break;
    }
}
