#include <string>
#include <cmath>
#include "greatest_digit.h"

int greatest_digit(int num) {

	int greatest{0};
	while (num != 0) {
		int digit{ num % 10 };
		if (digit > greatest) {
			greatest = digit;
		}
		num /= 10;
	}

	return greatest;
}