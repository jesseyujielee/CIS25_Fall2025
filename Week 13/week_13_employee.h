#pragma once
#include "week_13_user.h"

class Employee : public User {

public:

	Employee(std::string inputName) : User(inputName) {}

	void accessLevel() override {
		std::cout << "The permission level of \"" << name << "\" is: employee.\n";
	}
};