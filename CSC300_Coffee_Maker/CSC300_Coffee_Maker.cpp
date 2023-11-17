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
    string sz;
    string str;

    user1.selectCupSize();
    cin >> sz;
    user1.setCupSize(sz);
    cout << endl;

    user1.selectBrewStrength();
    cin >> str;
    user1.setBrewStrength(str);
    cout << endl;

    user1.printSelectedOptions();

    return 0;
}

