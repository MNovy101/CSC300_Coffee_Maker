#pragma once
#include <iostream>
#include "Controller.h"
#include "WaterLevelSensor.h"
#include "GroundsSensor.h"

using namespace std;

class Maintenance {
protected:
	int filterCount = 40;  //Setting default total filters
public:
	Maintenance();
	Maintenance(int fltrcnt);
	void setFilterCount(int fltrcnt);
	int getFilterCount();
	void addWater(Controller& usr, int intlvl);
	void addCoffeeGrounds(Controller& usr);
	void changeFilter();
	void resetFilterCount();
};
Maintenance::Maintenance() {
	this->filterCount = filterCount;
};
Maintenance::Maintenance(int fltrcnt) {
	this->filterCount = fltrcnt;
};
void Maintenance::setFilterCount(int fltrcnt) {
	filterCount = fltrcnt;
};
int Maintenance::getFilterCount() {
	return filterCount;
};
void Maintenance::addWater(Controller& usr, int intlvl) {

	int currentSession = intlvl;
	
	int currentWaterLevel = currentSession;
	
	if (usr.getCupSize() == "Large")
		currentWaterLevel = currentWaterLevel - 10;
	if (usr.getCupSize() == "Medium")
		currentWaterLevel = currentWaterLevel - 8;
	else
		currentWaterLevel = currentWaterLevel - 6;

	if (currentWaterLevel <= 0)
		cout << "Please add water until the level is above the min fill line." << endl;
};
void Maintenance::addCoffeeGrounds(Controller& usr) {
	GroundsSensor currentSession;
	double currentGroundLevel = currentSession.getGroundLevel();
	if (usr.getBrewStrength() == "Regular")
		currentGroundLevel = currentGroundLevel - 0.5;
	else
		currentGroundLevel = currentGroundLevel - 1.0;

	if (currentGroundLevel <= 0)
		cout << "Please add coffee grounds until the level is above the min fill line." << endl;
};
void Maintenance::changeFilter() {
		cout << "Please change filter" << endl;
};
void Maintenance::resetFilterCount() {
	cout << "Filter has been reset" << endl;
};