#include <iostream>

// Menu for a 4-operation calculator for 2 numbers
int week_4_menu() {
	int choice{0};
	while (choice != 1) {
		std::cout << "Menu:\n1 - exit\n2 - add\n3 - subtract\n4 - multiply\n5 - divide\n";
		std::cin >> choice;

		if (choice == 1)
			break;

		std::cout << "Enter two numbers: ";
		double num_1{}, num_2{};
		std::cin >> num_1 >> num_2;

		if (choice == 2)
			std::cout << "Answer: " << num_1 + num_2 << "\n";
		if (choice == 3)
			std::cout << "Answer: " << num_1 - num_2 << "\n";
		if (choice == 4)
			std::cout << "Answer: " << num_1 * num_2 << "\n";
		if (choice == 5)
			if (num_2 == 0)
				std::cout << "Cannot divide by zero\n";
			else
				std::cout << "Answer: " << num_1 / num_2 << "\n";
	}
	return 0;
}