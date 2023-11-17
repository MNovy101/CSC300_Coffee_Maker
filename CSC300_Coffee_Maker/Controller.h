#pragma once
#include <iostream>
#include "User.h"

using namespace std;

class Controller:public User {
protected:
	bool ecoMode = false;
	bool powerMode = false;
public:
	Controller();
	Controller(bool eco, bool pow);
	void setEcoMode(bool eco);
	bool getEcoMode();
	void setPowerMode(bool pow);
	bool getPowerMode();
	void heatWater();
	void dispenseCoffee();
};
Controller::Controller() {
	this->ecoMode = ecoMode;
	this->powerMode = powerMode;
};
Controller::Controller(bool eco, bool pow) {
	this->ecoMode = eco;
	this->powerMode = pow;
};
void Controller::setEcoMode(bool eco) {
	ecoMode = eco;
};
bool Controller::getEcoMode() {
	return ecoMode;
};
void Controller::setPowerMode(bool pow) {
	powerMode = pow;
};
bool Controller::getPowerMode() {
	return ecoMode;
};
void Controller::heatWater() {
	cout << "Heating Water" << endl;
	cout << "Adding Water" << endl;
};
void Controller::dispenseCoffee() {
	cout << "Dispensing Coffee" << endl;
};