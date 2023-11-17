#pragma once
#include <iostream>
#include <string>
#include <istream>

using namespace std;

class User {
private:
	string size = "Medium";  //Defaulting to Medium
	string strength = "Regular";  //Defaulting to Regular
public:
	User();
	User(string sz, bool str);
	void setCupSize(string sz);
	string getCupSize();
	void setBrewStrength(string str);
	string getBrewStrength();
	void selectCupSize();
	void selectBrewStrength();
	void printSelectedOptions();
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
	this->size = sz;
};
string User::getCupSize() {
	return size;
};
void User::setBrewStrength(string str) {
	this->strength = str;
};
string User::getBrewStrength() {
	return strength;
};
void User::selectCupSize() {
	cout << "Select the desired cup size" << endl;
	cout << "Options: Large, Medium, Small" << endl << endl;
};
void User::selectBrewStrength() {
	cout << "Select the desired coffee strength" << endl;
	cout << "Options: Regular, Bold" << endl << endl;
};
void User::printSelectedOptions() {
	cout << "You have made the following selections:" << endl;
	cout << "Cup Size: " << getCupSize() << endl;
	cout << "Brew Strength: " << getBrewStrength() << endl << endl;
}