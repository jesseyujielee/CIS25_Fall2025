#include <iostream>
#include <string>
#include <fstream>

class BankAccount {

	double balance{ 0 };
	std::string file{ "C:/Users/ylee4/source/repos/CIS25_Fall2025/Midterm/transactions.txt" };

	void saveToFile(std::string transaction, double amount) {
		
		// Append to the file
		std::ofstream out(file, std::ios::app);

		if (transaction == "withdraw")
			out << "Subtracted: $" << amount << " (new total: $" << balance << ")" << "\n";
		else if (transaction == "deposit")
			out << "Added: $" << amount << " (new total: $" << balance << ")" << "\n";
		else if (transaction == "failedWithdraw")
			out << "Failed to subtract: $" << amount << " (new total: $" << balance << ")" << "\n";
		out.close();
	}

public:

	BankAccount(double inputBalance) {
		balance = inputBalance;
	}

	void withdraw(double amount, std::string purchase) {
		if (amount > balance) {
			std::cerr << "Withdrawal exceeds balance ($" << balance << ")" << "\n";
			saveToFile("failedWithdraw", amount);
		}
		else {
			balance -= amount;
			std::cout << "Bought " << purchase << "\n";
			saveToFile("withdraw", amount);
		}
	}

	void deposit(double amount) {
		balance += amount;
		saveToFile("deposit", amount);
	}

	void get() {
		std::cout << balance << "\n";
	}
};

int midterm_bank() {
	BankAccount myAccount(0);
	myAccount.deposit(15.00);
	myAccount.withdraw(2.00, "socks");
	myAccount.withdraw(10.00, "blanket");
	myAccount.get();

	return 0;
}