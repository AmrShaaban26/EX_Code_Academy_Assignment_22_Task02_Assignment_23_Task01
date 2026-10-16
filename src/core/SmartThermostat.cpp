#include <iostream>
#include <string>
#include "excodeacademy/core/SmartThermostat.hpp"
#include "excodeacademy/core/Thermostat.hpp"

using namespace std;

//constructor
//SmartLight::SmartLight(string Name, bool OnorOff, int bright) : SmartDevice(Name, OnorOff), brightness(bright) {}
SmartThermostat::SmartThermostat(string Name, bool OnorOff, string Name2, double temp) : SmartDevice(Name, OnorOff),Thermostat(Name2, temp) {}
//member function
 void SmartThermostat::getInfo()
 {
    cout << "Name of Device in parent object is " << SmartDevice::deviceName;
    //specifying deviceName inside smart thermostat using scope resolution
    cout << " and Name of Device in child object is " << Thermostat::deviceName;
    cout << " and the power state is " << (isOn ? "on" : "off");
    cout << " and the Temperature is set to " << temperature << endl;
 }
//perform action function override body
 void SmartThermostat::performAction()
 {
   cout << "Syncing temperature settings across the smart Network.\n";
 }