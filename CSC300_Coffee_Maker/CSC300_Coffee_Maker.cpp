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
    User user1;
    GUI session;
    string sz;
    string str;

    session.printSizeOptions();
    cin >> sz;
    user1.setCupSize(sz);
    cout << endl;

    session.printBrewOptions();
    cin >> str;
    user1.setBrewStrength(str);
    cout << endl;

    session.printSelectedOptions(user1);

    return 0;
}

