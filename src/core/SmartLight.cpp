#include <iostream>
#include "excodeacademy/core/SmartDevice.hpp"
#include "excodeacademy/core/SmartLight.hpp"


//constructor
SmartLight::SmartLight(string Name, bool OnorOff, int bright) : SmartDevice(Name, OnorOff), brightness(bright) {}
//member function
void SmartLight::showStatus()
    {
        std::cout << " The Device Name is " << deviceName;
        std::cout << " and the Power State is " << (isOn ? "on" : "off");
        std::cout << " and the Brightness is " << brightness << endl;
    }
//perfrom action override function body
void SmartLight::performAction()
    {
        if (isOn == true)
        {
            cout << "Adjusting Light Brightness to " << brightness << " % \n";
        }
        else
        {
            cout << "Cannot adjust brightness, The light is off. \n";
        }
    }
//perform general action override function body
void SmartLight::performGeneralAction()
{
    cout << "Lighting Up the Room.\n";
}