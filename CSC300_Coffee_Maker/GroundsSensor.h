#pragma once
#include <iostream>
#include "Maintenance.h"

using namespace std;

class GroundsSensor : public Maintenance {
protected:
	float groundLevel = 40;
public:
	GroundsSensor();
	GroundsSensor(float grndlvl);
	void setGroundLevel(float grndlvl);
	float getGroundLevel();
};
GroundsSensor::GroundsSensor() {
	this->groundLevel = groundLevel;
};
GroundsSensor::GroundsSensor(float grndlvl) {
	this->groundLevel = grndlvl;
};
void GroundsSensor::setGroundLevel(float grndlvl) {
	groundLevel = grndlvl;
};
float GroundsSensor::getGroundLevel() {
	return groundLevel;
};