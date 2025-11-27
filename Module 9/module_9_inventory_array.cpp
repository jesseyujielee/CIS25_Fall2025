#include <iostream>
#include <string>

class Item {

public:
	std::string name;
	int quantity;

	Item() {
		name = "";
		quantity = 0;
	}
};

void populate(Item inventory[10]) {

	int i{ 0 };
	std::string inputName{};
	int inputQuantity{ 1 };

	while (i != 10) {
		std::cout << "\nEnter item name (type \"exit\" to stop): \n";
		std::getline(std::cin >> std::ws, inputName);
		if (inputName == "exit") {
			break;
		}
		std::cout << "\nEnter quantity: \n";
		std::cin >> inputQuantity;
		inventory[i].name = inputName;
		inventory[i].quantity = inputQuantity;
		i++;
	}
}

void display(Item inventory[10]) {
	
	std::cout << "\nInventory: \n";

	for (int i{ 0 }; i < 10; i++) {
		if (!inventory[i].name.empty()) {
			std::cout << inventory[i].name << ": " << inventory[i].quantity << "\n";
		}
	}
}

void search(Item inventory[10]) {

	std::cout << "\nName to search for: \n";
	std::string index;
	std::getline(std::cin >> std::ws, index);

	for (int i{ 0 }; i < 10; i++) {
		if (inventory[i].name == index) {
			std::cout << "\nFound: " << inventory[i].quantity << "\n";
			return;
		}
	}
	std::cout << "\nNot found\n";
}

int module_9_inventory_array() {

	Item inventory[10];
	populate(inventory);
	display(inventory);
	search(inventory);

	return 0;
}