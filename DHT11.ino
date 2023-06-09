
#include <EduIntro.h>

DHT11 dht11(D7);  

int C;  
float F; 
int H;   

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  dht11.update();

  float C = dht11.readCelsius();   
  float F = dht11.readFahrenheit();
  float H = dht11.readHumidity();     

  Serial.print("H: ");
  Serial.print(H);
  Serial.print("\tC: ");
  Serial.print(C);
  Serial.print("\tF: ");
  Serial.println(F);

  delay(1000);    
}
