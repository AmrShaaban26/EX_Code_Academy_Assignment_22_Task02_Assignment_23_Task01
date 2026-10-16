#pragma once
#include <string>
#include <excodeacademy/core/SmartDevice.hpp>

using namespace std;

class SmartLight : public virtual SmartDevice
// we will create a new class that inherits from this class and 
// the class SmartThermostat, adding the virtual keyword prevents the 
// child class from getting 2 copies of the grandfather class smartdevice
{
    int brightness;

    public:
        //constructor
        SmartLight(string Name, bool OnorOff, int bright);
        //member functions
        void showStatus() override;
        //override perform action function
        void performAction() override;
        //override general perform action function
        void performGeneralAction() override;
};