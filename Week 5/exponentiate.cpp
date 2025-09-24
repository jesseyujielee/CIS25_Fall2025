#include <cmath>
#include "exponentiate.h"

double exponentiate(double base, int exp) {

	double result{ 1 };

	for (int i{ 0 }; i < std::abs(exp); i++) {
		result *= base;
	}

	if (exp < 0) {
		return 1.0 / result;
	}

	return result;
}