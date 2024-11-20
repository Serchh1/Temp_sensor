#include <Arduino.h>
#include <DHT11.h>
#include <sensor_temp.h>

//Create the objet for your class
SensorDHT11::SensorDHT11(uint8_t pinSensor) : sensor(pinSensor), temperature(0), humidity(0) 
{
    uint8_t m_pinsensor = pinSensor;
}

//DON'T PUT ANYTHING
//Only read data and returns the values on funtion .get...
void SensorDHT11::readData()
{
    sensor.readTemperatureHumidity(temperature, humidity);
}

//Returns temp value
int SensorDHT11::getTemperature() 

const 
{
    return temperature;
}

//Returns humidity value
int SensorDHT11::getHumidity() 

const 
{
    return humidity;
}
