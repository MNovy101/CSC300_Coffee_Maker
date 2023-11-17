#pragma once
#include <iostream>
#include "Maintenance.h"

using namespace std;

class FilterStatusSensor : public Maintenance {
private:
	bool FilterStatus = true; //true = good, false = bad
public:
	FilterStatusSensor();
	FilterStatusSensor(bool fltrsts);
	void setFilterStatus(bool fltrsts);
	int getFilterStatus();
};
FilterStatusSensor::FilterStatusSensor() {
	this->FilterStatus = FilterStatus;
};
FilterStatusSensor::FilterStatusSensor(bool fltrsts) {
	this->FilterStatus = fltrsts;
};
void FilterStatusSensor::setFilterStatus(bool fltrsts) {
	FilterStatus = fltrsts;
};
int FilterStatusSensor::getFilterStatus() {
	return FilterStatus;
};