#include <iostream>

int main() {
	string itemName{};
	while (!itemName) {
		std::cout << "Enter item name: ";
		std::cin >> itemName;
	}

	std::cout << "The cost of " << itemName << "\n";

	return 0;
}
