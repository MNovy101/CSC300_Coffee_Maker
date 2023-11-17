// CSC300_Coffee_Maker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
#include <string>
#include <sstream>
#include "User.h"
#include "WaterLevelSensor.h"
#include "GroundsSensor.h"
#include "FilterStatusSensor.h"
#include "Maintenance.h"
#include "Controller.h"
#include "GUI.h"

using namespace std;

int main()
{
    Controller user1;
    GUI session;
    string userEnteredsize;
    string userEnteredStrength;

    user1.setPowerMode(true);
    user1.setEcoMode(true);

    if (user1.getEcoMode() == true)
        cout << "Eco Mode is now active" << endl << endl;
    else
        cout << "Ecomode is Off" << endl << endl;

    session.printSizeOptions();
    cin >> userEnteredsize;
    user1.setCupSize(userEnteredsize);
    cout << endl;

    session.printBrewOptions();
    cin >> userEnteredStrength;
    user1.setBrewStrength(userEnteredStrength);
    cout << endl;

    session.printSelectedOptions(user1);

    session.heatWater();
    session.dispenseCoffee();

    session.printBrewingComplete();

    return 0;
}

