#include <iostream>
#include "excodeacademy/core/SmartDevice.hpp"
#include "excodeacademy/core/SecurityDevice.hpp"

using namespace std;

//constructor
SecurityDevice::SecurityDevice(string Name, bool OnorOff) : SmartDevice(Name, OnorOff) {}
//member function
void SecurityDevice::activateAlarms()
{
    cout << "Alarms are Active. Be wary!!!" << endl;
}