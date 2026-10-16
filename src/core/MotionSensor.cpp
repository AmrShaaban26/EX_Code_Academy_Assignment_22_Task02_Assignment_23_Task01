#include <iostream>
#include "excodeacademy/core/MotionSensor.hpp"
#include "excodeacademy/core/SecurityDevice.hpp"

using namespace std;

//constructor
MotionSensor::MotionSensor(string Name, bool OnorOff) : SecurityDevice(Name, OnorOff) {}
//member function
void MotionSensor::showInfo()
{
    cout << "Motion Sensors are Active. Be wary!!!" << endl;
}