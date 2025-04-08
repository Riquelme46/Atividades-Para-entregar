#include <Arduino.h>
#include <LiquidCrystal_I2C.h>
#include <Bounce2.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);

//* Instancias

Bounce Botao1 = Bounce();
Bounce Botao2 = Bounce();
Bounce Botao3 = Bounce();

//* Leds
#define pinLedA 5
#define pinLedB 4
#define pinLedC 2
#define pinLedD 15

//* Botões
#define pinBotao1 23
#define pinBotao2 19
#define pinBotao3 18        

void setup() 
{
  Botao1.attach(pinBotao1, INPUT_PULLUP);
  Botao2.attach(pinBotao2, INPUT_PULLUP);
  Botao3.attach(pinBotao3, INPUT_PULLUP);
  lcd.init();
  lcd.backlight();
  pinMode(5 , OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(15, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
   
   Botao1.update();
   Botao2.update();
   Botao3.update();
   static int contagem = 0;
   static bool Selecao = 0;
   

if(Botao1.fell()) // SE O BOTAO1 FOR PRESSIONADO
{
   
   Selecao = !Selecao;  
   Serial.println(Selecao);

}

if(Botao2.fell()) // SE O BOTAO2 FOR PRESSIONADO
{

}

if(Botao3.fell()) // SE O BOTAO3 FOR PRESSIONADO
{


}

}
