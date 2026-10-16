#include <iostream>
#include "excodeacademy/core/SmartDevice.hpp"

using namespace std;

//constructor
SmartDevice::SmartDevice(string Name, bool OnorOff)
{
    deviceName = Name;
    isOn = OnorOff;
}
//member function
void SmartDevice::showStatus()
        {
            cout << " The Device Name is " << deviceName;
            cout << " and the Power State is " << (isOn ? "on" : "off") << endl;
        }
//perform action function body
void SmartDevice::performAction()
{
    cout << "Device is performing a standard operation. \n";
}
//general perform action function body
void SmartDevice::performGeneralAction()
{
    cout << "Device is performing a General Task.\n";
}
//virtual smartdevice destructor function body
SmartDevice::~SmartDevice()
{
    cout << "Performing RAM cleanup. Please Wait ... \n";
}