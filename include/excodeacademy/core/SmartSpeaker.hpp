#pragma once
#include <string>

using namespace std;

class SmartSpeaker : public SmartDevice
{
    int volume;

    public:
        //constructor
        SmartSpeaker(string Name, bool OnorOff, int vol);
        //member function to Show status
        void showStatus() override;
        //perform general action function inherited from SmartDevice class
        void performGeneralAction() override;
};