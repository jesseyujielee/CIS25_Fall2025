#include <string>
#include <cmath>
#include "greatest_digit.h"

int greatest_digit(int num) {

	int greatest{0};
	std::string num_str = std::to_string(num);
	for (int i = 0; i < num_str.length(); i++) {
		int digit{ num % static_cast<int>(std::pow(10, i)) };
		if (digit > greatest)
			greatest = digit;
	}
}