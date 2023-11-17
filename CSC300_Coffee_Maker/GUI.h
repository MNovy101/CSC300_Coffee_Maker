#pragma once
#include <iostream>
#include "User.h"
#include "Controller.h"
#include "Maintenance.h"

using namespace std;

class GUI:public Controller, public Maintenance {
public:
	void printSizeOptions();
	void printBrewOptions();
	void printSelectedOptions(Controller& usr);
	void printBrewingMessage(Controller& usr);
	void printBrewingComplete();
};
void GUI::printSizeOptions() {
	cout << "Select the desired cup size" << endl;
	cout << "Options: Large, Medium, Small" << endl << endl;
};
void GUI::printBrewOptions() {
	cout << "Select the desired coffee strength" << endl;
	cout << "Options: Regular, Bold" << endl << endl;
};
void GUI::printSelectedOptions(Controller& usr) {

	cout << "You have made the following selections:" << endl;
	cout << "Cup Size: " << usr.getCupSize() << endl;
	cout << "Brew Strength: " << usr.getBrewStrength() << endl << endl;
};
void GUI::printBrewingMessage(Controller& usr) {
	cout << "Brewing is in Progress" << endl;
	usr.heatWater();
	usr.dispenseCoffee();
};
void GUI::printBrewingComplete() {
	cout << endl << "Enjoy!  Caution: Contents may be hot!" << endl << endl;
};