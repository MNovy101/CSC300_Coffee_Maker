#pragma once
#include <iostream>
#include "Maintenance.h"

using namespace std;

class WaterLevelSensor: public Maintenance {
protected:
	int waterlevel = 40;
public:
	WaterLevelSensor();
	WaterLevelSensor(int wtrlvl);
	void setWaterLevel(int wtrlvl);
	int getWaterLevel();
};
WaterLevelSensor::WaterLevelSensor() {
	this->waterlevel = waterlevel;
};
WaterLevelSensor::WaterLevelSensor(int wtrlvl) {
	this->waterlevel = wtrlvl;
};
void WaterLevelSensor::setWaterLevel(int wtrlvl) {
	waterlevel = wtrlvl;
};
int WaterLevelSensor::getWaterLevel() {
	return waterlevel;
};