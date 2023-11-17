#pragma once
#include <iostream>
#include <string>
#include <istream>

using namespace std;

class User {
protected:
	string size = "Medium";  //Defaulting to Medium
	string strength = "Regular";  //Defaulting to Regular
public:
	User();
	User(string sz, bool str);
	void setCupSize(string sz);
	string getCupSize();
	void setBrewStrength(string str);
	string getBrewStrength();
};
User::User() {
	this->size = size;
	this->strength = strength;
};
User::User(string sz, bool str) {
	this->size = sz;
	this->strength = str;
};
void User::setCupSize(string sz) {
	size = sz;
};
string User::getCupSize() {
	return size;
};
void User::setBrewStrength(string str) {
	strength = str;
};
string User::getBrewStrength() {
	return strength;
};
