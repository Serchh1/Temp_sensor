#pragma once
#include <Arduino.h>
#include <DHT11.h>

class SensorDHT11 
{
public:
    SensorDHT11(uint8_t pin); //Put your pin for ESP32
    void readData(); //Only read data and returns the values on get...
    int getTemperature() const;
    int getHumidity() const;

private:
    DHT11 sensor;
    uint8_t m_pinsensor;
    int temperature;
    int humidity;
};
