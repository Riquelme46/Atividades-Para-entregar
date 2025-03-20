

#include <LiquidCrystal_I2C.h>
#define valorBotao1 0
#define valorBotao2 145  
#define valorBotao3 329  
#define valorBotao4 505
#define valorBotao5 741
#define valorSolto 1023
#define pinLedB 11
#define pinLedA 10
bool estadoLedA = 0;
bool estadoLedB = 0;

LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print(">LED A OFF");
  lcd.setCursor(0,1);
  lcd.print(" LED B OFF");
  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);
}

void loop()
{
    int valorLeituraAnalogica = analogRead(A0);
    static int valorAnterior = 1023;
    static bool posicao = 0;
 
  //***** TRATAMENTO DOS BOTOES *******
  // NENHUM BOTAO
  if (valorLeituraAnalogica == valorSolto)
   {
     
   }
 
  //BOTAO 1 PRESSIONADO
     else if(valorLeituraAnalogica == valorBotao1 &&
             valorAnterior == 1023)
    {
      posicao = 0;
    }
 
   //BOTAO 2 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao2 * 0.9  &&
            valorLeituraAnalogica <= valorBotao2 * 1.1 &&
            valorAnterior == 1023)
    {
      posicao = 1;
    }
 
   //BOTAO 3 PRESSIONADO
    else if(valorLeituraAnalogica >= valorBotao3 * 0.9  &&
            valorLeituraAnalogica <= valorBotao3 * 1.1 &&
            valorAnterior == 1023)
    {
     
    }
   
   //BOTAO 4 PRESSIONADO
   else if(valorLeituraAnalogica >= valorBotao4 * 0.9  &&
            valorLeituraAnalogica <= valorBotao4 * 1.1 &&
            valorAnterior == 1023)
    {
     
    }
 
   //BOTAO 5 PRESSIONADO
      else if(valorLeituraAnalogica >= valorBotao5 * 0.9  &&
            valorLeituraAnalogica <= valorBotao5 * 1.1 &&
            valorAnterior == 1023)
    {
      if (!posicao)estadoLedA = !estadoLedA;
      
      else estadoLedB = !estadoLedB;
    }
 
  valorAnterior = valorLeituraAnalogica;

  //****** FIM DO TRATAMENTO DOS BOTOES ******
 
 
  // ***** ATUALIZA DISPLAY ******
  if(posicao == 0)
  {
    lcd.setCursor(0,0);
    lcd.print(">");
    lcd.setCursor(0,1);
    lcd.print(" ");
  }
  else
    {
    lcd.setCursor(0,1);
    lcd.print(">");
    lcd.setCursor(0,0);
    lcd.print(" ");
    }
  
  if (estadoLedA)
  {
    lcd.setCursor(7,0);
    lcd.print("ON ");
    digitalWrite(pinLedA, HIGH);
  }  
  else
  {
    lcd.setCursor(7,0);
    lcd.print("OFF");
    digitalWrite(pinLedA, LOW);
  }
  
    if (estadoLedB)
  {
    lcd.setCursor(7,1);
    lcd.print("ON ");
    digitalWrite(pinLedB, HIGH);
  }  
  else
  {
    lcd.setCursor(7,1);
    lcd.print("OFF");
    digitalWrite(pinLedB, LOW);
  }
  


  //***** ATUALIZACAO DOS LED ******
 
}