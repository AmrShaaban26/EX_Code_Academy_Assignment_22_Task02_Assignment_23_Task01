#pragma once
#include <string>
#include <excodeacademy/core/SmartDevice.hpp>
#include <excodeacademy/core/Thermostat.hpp>

using namespace std;

class SmartThermostat : public virtual SmartDevice , public Thermostat
// A child class inheriting from more than one parent class,
// this type of inheritance is called multiple inheritance.
// we will create a new class that inherits from this class and 
// the class SmartLight, adding the virtual keyword prevents the 
// child class from getting 2 copies of the grandfather class smartdevice
{
    public:
        //constructor
        SmartThermostat(string Name, bool OnorOff, string Name2, double temp);
        //member function
        void getInfo();
        //function perform action override
        virtual void performAction() override;
};