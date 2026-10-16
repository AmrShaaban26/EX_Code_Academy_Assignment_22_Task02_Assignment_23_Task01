#pragma once
#include <string>

using namespace std;

class Thermostat
{
     protected:
        string deviceName;
        double temperature;

    public:
        //constructor
        Thermostat(string Name2, double temp) ;
        //thermostat Value setter function
        void setTemperature(double temp);
};