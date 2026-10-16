#include <iostream>
#include <string>
#include <excodeacademy/core/SmartDevice.hpp>
#include <excodeacademy/core/SmartLight.hpp>
#include <excodeacademy/core/Thermostat.hpp>
#include <excodeacademy/core/SmartThermostat.hpp>
#include <excodeacademy/core/SmartSpeaker.hpp>
#include <excodeacademy/core/SecurityDevice.hpp>
#include <excodeacademy/core/MotionSensor.hpp>

using namespace std;

int main() 
{
    SmartDevice Phone("Nokia", true);
    Phone.showStatus();
    SmartLight Circle("LED", true, 25);
    Circle.showStatus();
    Thermostat Thermos("Kelner",21.56);
    Thermos.setTemperature(22.89);
    //modifying the SmTher object as per assignment 22 task 02
    SmartThermostat SmTher("Hauser", false, "Eisner", 69.8);
    SmTher.getInfo();
    SecurityDevice Dev1("Camera", true);
    Dev1.activateAlarms();
    MotionSensor Mot1("Hikivision", false);
    Mot1.showInfo();
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
    SmartDevice* ptr = new SmartDevice("Nokia1", false);
    SmartLight("Living Room Light", true, 80);
    ptr->showStatus();
    /*
    The virtual keyword is essential
    for the 
    ptr->showStatus();
    line to work correctly, because without it, 
    static binding will occur meaning that the line ptr->showStatus(); will 
    execute the base class version of the function and completely
    ignore the overridden version of the function inside the child class.
    */

    // carrying on to assignment 22 task 02
    Phone.performAction();
    Circle.performAction();
    SmartLight Circle1("LED", false, 0);
    Circle1.showStatus();
    Circle1.performAction();
    SmTher.performAction();
    // the keyword virtual must be added to the subclasses SmartLight and
    // SmartThermostat for their child class Superhub to inherit from both
    //of them without getting two copies of the grandfather class SmartDevice.
    
    //creating array of three pointers
    SmartDevice* polymorphicArray[3];
    //filling the array
    polymorphicArray[0] = new SmartDevice("Samsung", false);
    polymorphicArray[1] = new SmartLight("circle", true, 46);
    polymorphicArray[2] = new SmartThermostat("SmTher1", true,"Fellner", 46);
    //looping through the array
    for(int i = 0; i <=2; i++)
    {
        polymorphicArray[i]->performAction();
        cout << "Done. \n";
    }
    // the keyword const is not added to the SmartLight class in my solution
    // if this keyword is added, my program will not compile successfully
    // because if it is added, the compiler treats the performAction function in
    // the SmartLight class as a new function not an override of the performAction 
    // function in the base class SmartDevice.
    
    // the base class destructor must be virtual for it not to cause issues
    
    //Assignment 23 Task 01
    //modifying showStatus() in SmartDevice
    SmartDevice* ptr0 = new SmartLight("Living_Room_Light", true, 60);
    ptr0->showStatus();
    
    SmartSpeaker speaker1("Hoeren", true, 50);
    speaker1.showStatus();
    speaker1.performGeneralAction();
    Circle1.performGeneralAction();
    ptr0->performGeneralAction();
    //creating base pointer and using it to call performGeneralAction
    SmartDevice* ptr1 = new SmartLight("Bath_Room_Light", true, 70);
    ptr1->performGeneralAction();
    //reusing the base pointer with smartspeaker class
    ptr1 = new SmartSpeaker("Lesen_Auf_Deutsch", true, 65);
    ptr1->performGeneralAction();
}