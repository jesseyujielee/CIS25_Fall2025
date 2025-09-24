#include <iostream>
#include "greatest_digit.h"

double exponentiate(double base, int exp) {

	double result{1};
	
	for (int i{ 0 }; i < std::abs(exp); i++) {
		result *= base;
	}

	if (exp < 0) {
		return 1.0 / result;
	}

	return result;
}

int main() {

	int choice{ 0 };
	do {
		std::cout << "Menu:\n1 - exit\n2 - greatest digit\n3 - exponentiate\n";
		std::cin >> choice;
		if (choice == 2) {
			std::cout << "Enter an int: ";
			int input{};
			std::cin >> input;
			std::cout << greatest_digit(input) << "\n";
		}
		else if (choice == 3) {
			std::cout << "Enter a base and an exponent (int): ";
			double base{};
			int exp{};
			std::cin >> base >> exp;
			std::cout << exponentiate(base, exp) << "\n";
		}
	} while (choice != 1);

	return 0;
}