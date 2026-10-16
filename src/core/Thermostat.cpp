#include <iostream>
#include "excodeacademy/core/Thermostat.hpp"

using namespace std;

//constructor
Thermostat::Thermostat(string Name2, double temp) 
{
    temperature = temp;
    deviceName = Name2;
}
//thermostat Value setter function
void Thermostat::setTemperature(double temp)
{
    temperature = temp;
    //to test it is working
    cout << "temperature is set to " << temperature << endl;
}