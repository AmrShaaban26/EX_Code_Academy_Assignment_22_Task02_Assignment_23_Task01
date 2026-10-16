#pragma once
#include <string>
#include <excodeacademy/core/SmartDevice.hpp>

using namespace std;

class SecurityDevice : public SmartDevice
{
    public:
    //constructor
    SecurityDevice(string Name, bool OnorOff);
    //member functions
    void activateAlarms();
};