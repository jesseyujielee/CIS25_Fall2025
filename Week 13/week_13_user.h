#pragma once
#include <iostream>
#include <string>

class User {

protected:

	std::string name;

public:

	User(std::string inputName) {
		name = inputName;
	}

	// Virtual method allows for polymorphism by calling the overwritten method of that specific subclass accordingly
	virtual void accessLevel() {
		std::cout << "The permission level of \"" << name << "\" is: user.\n";
	}
};