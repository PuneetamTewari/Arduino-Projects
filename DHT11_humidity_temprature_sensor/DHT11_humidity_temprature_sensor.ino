#include<DHT.h>

DHT dht(4,DHT11);

void setup() 
{
dht.begin();
Serial.begin(9600);  
}

void loop() 
{
float humidity= dht.readHumidity();
float temp=dht.readTemperature();
Serial.println("Humidity:");
Serial.println(humidity);
Serial.println("Temprature:");
Serial.println(temp);
delay(500);
}
