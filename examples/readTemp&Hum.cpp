#include <Arduino.h>
#include <sensor_temp.h>

#define PINSENSORTEMP 2

SensorDHT11 mySensor(PINSENSORTEMP);

void setup ()
{
    Serial.begin(115200);
}

void loop ()
{
    mySensor.readData();
    Serial.print("Temperature: ");
    Serial.print(mySensor.getTemperature());
    Serial.print(" °C\tHumidity: ");
    Serial.print(mySensor.getHumidity());
    Serial.println(" %");

    delay(1000);
}