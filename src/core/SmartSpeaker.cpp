#include <iostream>
#include "excodeacademy/core/SmartDevice.hpp"
#include "excodeacademy/core/SmartSpeaker.hpp"

using namespace std;

//constructor
SmartSpeaker::SmartSpeaker(string Name, bool OnorOff, int vol) : SmartDevice(Name, OnorOff), volume(vol) {}
//showstatus member function body
void SmartSpeaker::showStatus()
{
    SmartDevice::showStatus();
    cout << " and the Volume is " << volume << " %.\n";
}
void SmartSpeaker::performGeneralAction()
{
    cout << "Playing ambient music... \n";
}