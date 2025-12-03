#include "week_13_employee.h"

class InventoryManager : public Employee {

public:

	InventoryManager(std::string inputName) : Employee(inputName) {}

	void accessLevel() override {
		std::cout << "The permission level of \"" << name << "\" is: inventory manager.\n";
	}
};

int week_13_inventory_manager() {

	InventoryManager invMan("Gertrude");
	invMan.accessLevel();

	return 0;
}