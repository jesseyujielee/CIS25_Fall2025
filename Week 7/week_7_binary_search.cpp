#include <iostream>
#include <string>
#include <fstream>

struct Item {
	std::string name;
	int id;
};

Item* personArray() {
	Item* itemList = new Item[500];

	std::ifstream file;
	file.open("Week 7/us-500-windows.csv");
	std::string text{};

	// Move past the first line of headers
	std::getline(file, text, '\n');

	for (int i{ 0 }; i < 500; i++) {
		std::string name_1{};
		std::string name_2{};

		// Get and set name (remove ")
		std::getline(file, name_1, ',');
		name_1.erase(std::remove(name_1.begin(), name_1.end(), '"'), name_1.end());
		std::getline(file, name_2, ',');
		name_2.erase(std::remove(name_2.begin(), name_2.end(), '"'), name_2.end());
		itemList[i].name = name_1 + " " + name_2;

		// Set id
		itemList[i].id = i;

		// Move past the rest of the info
		std::getline(file, text);
	}

	return itemList;
}

void binary_search(Item* array, int target) {
	int hi{ 499 }, lo{ 0 };

	while (hi >= lo) {
		int mid{ (lo + hi) / 2 };
		if (array[mid].id == target) {
			std::cout << "The name is " << array[mid].name << "\n";
			return;
		}
		else if (array[mid].id > target) {
			hi = mid - 1;
		}
		else {
			lo = mid + 1;
		}
	}

	std::cerr << "Not found" << "\n";
}

int week_7_binary_search() {
	Item* itemList{ personArray() };

	int target{};
	do {
		std::cout << "Find an ID between 0-499: " << "\n";
		std::cin >> target;
	} while (target < 0 || target > 499);

	binary_search(itemList, target);

	delete[] itemList;

	return 0;
}