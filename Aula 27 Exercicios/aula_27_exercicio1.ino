float altura = 1.69;
float peso = 63;
float resultadoReal = 0;


void setup()
{
  Serial.begin(9600);
  resultadoReal = peso / sq(altura);
  Serial.println(resultadoReal);
  
  
  if (resultadoReal >= 40){
    Serial.println("Obesidade classe |||"); 
    
   }else if( resultadoReal <= 35 && resultadoReal > 39.9){
    Serial.println("Obessidade classe ||");
    
   }else if( resultadoReal <= 30 && resultadoReal > 34.9){
    Serial.println("Obessidade classe |");
    
   }else if( resultadoReal <= 25  && resultadoReal > 29.9){
    Serial.println("Excesso de peso");
    
   }else if( resultadoReal <= 18.50 && resultadoReal > 24.90){
    Serial.println("Peso Normal");
   
  }else{
    Serial.println("Abaixo do peso normal");}
   
 
}

void loop()
{

}