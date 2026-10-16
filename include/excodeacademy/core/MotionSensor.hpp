#pragma once
#include <string>
#include <excodeacademy/core/SecurityDevice.hpp>

using namespace std;

class MotionSensor : public SecurityDevice
{
    public:
    //constructor
    MotionSensor(string Name, bool OnorOff);
    //member function
    void showInfo();
};

/*
the answer to question number 6 is no.
the child class Router cannot access the public variables
of its parent class ConfigData{}, because of the private access
modifier that is in the line 
class Router : private ConfigData{};
however it can only use setter and getter
function to be able to modify the parent class
variable values.
*/