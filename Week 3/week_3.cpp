#include <iostream>

int main() {
	std::string itemName{};
	std::cout << "Enter item name: ";
	std::cin >> itemName;

	int itemQuantity{};
	while (itemQuantity == 0) {
		std::cout << "Enter item quantity: ";
		std::cin >> itemQuantity;

		// Handles invalid input (not int)
		if (std::cin.fail()) {

			// Clears the fail state on cin
			std::cin.clear();

			// Discards invalid inputs (std::numeric_limits<std::streamsize>::max() is the max number of characters to ignore)
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	float itemCost{};
	while (itemCost == 0) {
		std::cout << "Enter item cost: ";
		std::cin >> itemCost;

		// Handles invalid input (not float)
		if (std::cin.fail()) {

			// Clears the fail state on cin
			std::cin.clear();

			// Discards invalid inputs (std::numeric_limits<std::streamsize>::max() is the max number of characters to ignore)
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	std::cout << itemName << " (x" << itemQuantity << ") cost: $" << (itemQuantity * itemCost) << "\n";

	return 0;
}
