#include <iostream>
#include <string>
#include <fstream>

class ItemWeekSix {
public:
	std::string name;
	std::string description;
	int quantity;

	ItemWeekSix(std::string inputName, std::string inputDescription, int inputQuantity) {
		name = inputName;
		description = inputDescription;
		quantity = inputQuantity;
	}

	void saveToFile() {
		std::ofstream out;
		out.open("Week 6/items.txt");
		out << "Name: " << name << "\n" << "Description: " << description << "\n" << "Quantity: " << quantity << "\n";
		out.close();
	}

	void loadFromFile() {
		std::ifstream in;
		in.open("Week 6/items.txt");
		std::string text{};

		while (std::getline(in, text)) {
			std::cout << text << "\n";
		}

		in.close();
	}
};

int week_6_inventory() {
	ItemWeekSix pen("Household pen", "Mighter than the sword", 5);

	pen.saveToFile();
	pen.loadFromFile();

	return 0;
}
