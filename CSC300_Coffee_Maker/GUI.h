#pragma once
#include <iostream>
#include "User.h"

using namespace std;

class GUI:public User {
private:

public:
	void printSizeOptions();
	void printBrewOptions();
	void printSelectedOptions(User& usr);
};
void GUI::printSizeOptions() {
	cout << "Select the desired cup size" << endl;
	cout << "Options: Large, Medium, Small" << endl << endl;
};
void GUI::printBrewOptions() {
	cout << "Select the desired coffee strength" << endl;
	cout << "Options: Regular, Bold" << endl << endl;
};
void GUI::printSelectedOptions(User& usr) {

	cout << "You have made the following selections:" << endl;
	cout << "Cup Size: " << usr.getCupSize() << endl;
	cout << "Brew Strength: " << usr.getBrewStrength() << endl << endl;
}