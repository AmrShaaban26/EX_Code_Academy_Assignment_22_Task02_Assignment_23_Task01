#pragma once
#include <string>

using namespace std;

class SmartDevice     //base class
{
    protected: // hidden from main, visible to child classes
        string deviceName;
        bool isOn;

    public:
        //constructor
        SmartDevice(string Name, bool OnorOff);
        //member functions protype
        virtual void showStatus();
        //adding member function perform action
        virtual void performAction();
        //adding  a general perform action function
        virtual void performGeneralAction();
        //adding a virtual destructor
        virtual ~SmartDevice();
};