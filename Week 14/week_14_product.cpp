#include <iostream>
#include <string>

class Product {

private:
	int id;
	std::string name;
	float price;

public:
	Product(int input_id, std::string input_name, double input_price) {
		id = input_id;
		name = input_name;
		price = static_cast<float>(input_price);
		std::cout << "Constructor called from instance of Product of name \"" << name << "\"\n";
	}

	~Product() {
		std::cout << "Destructor called from instance of Product of name \"" << name << "\"\n";
	}

	void printDetails() {
		std::cout << "ID: " << id << "\nName: " << name << "\nPrice: $" << price << "\n";
	}
};

int week_14_product() {
	Product book(101010, "Catcher in the Rye", 6.99);
	book.printDetails();

	return 0;
}