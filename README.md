# Info

Programs for CIS 25 fall semester of 2025 at Laney. New code is in branches.

# Week 3

week_3.cpp:

Objective: to take an item's name, the quantity of the item, and the total cost, and output all of them.
1. Input is taken for the name of the item as a string and stores it as a variable.
2. Input is taken for the quantity of the item as an integer and stores it as a variable.
3. If std::cin fails (due to an invalid type), it is cleared and reset, then it tries again via a while loop that only breaks when std::cin is not 0.
4. Input is taken for the cost of the item as a float and stores it as a variable.
5. Same as 3.
6. It prints the name of the item, the quantity entered, and the total cost (quantity * cost).

# Week 4

week_4_menu.cpp:

Objective: to create a simple menu for a 4-operator calculator for 2 numbers.
1. Input is taken for the menu choice.
2. If choice is 1, the loop breaks and the program terminates.
3. If not, the program goes on and accepts 2 doubles.
4. If choice is 2, the numbers are added, if it is 3, subtracted, if 4, multiplied, and if 5, divided.
5. If choice is 5 and the second double is 0, a message is thrown to say that division by 0 is not possible.

week_4_largest_number.cpp:

Objective: to output the largest number out of 3 inputs.
1. Input is taken for 3 doubles: x, y, and z.
2. If x >= y, the program determines if x >= z.
3. If so, x is the greatest. If not, z is the greatest.
4. If the condition from 2. is false (i.e. x < y), the program determines if y >= z.
5. If so, y is the greatest. If not, z is the greatest.

# Week 5

week_5_menu.cpp:

Objective: to create a 3-choice menu for number operations using loops (while, do-while, & for) and headers.
1. Headers for functions are declared.
2. Input is taken for the menu choice in a do-while loop.
3. If choice is 1, the loop ends and the program terminates.
4. If choice is 2, the greatest digit is found via a while loop that continually takes the remainder of the number divided by 10, compares it to the greatest, updates if needed, then integer divides the number by 10.
5. If choice is 3, exponentiation is done via a for loop that continually multiplies the result (starts at 1 in case exp is 0) by the base the number of times of the absolute value of the exponent.
6. If the exponent is negative, the reciprocal of the result is returned, otherwise the result is returned.

# Week 6

week_6_inventory.cpp:

Objective: to create an Item class, instantiate it and give it values, and call its methods.
1. Class Item is declared with public members name, description, and quantity.
2. A constructor takes input.
3. Public methods allow for the input and output of data in a text file using fstream.
4. In main(), create an instance of Item called pen, give it its arguments, and call saveToFile() and loadFrom File().

# Week 7

week_7_binary_search.cpp:

Objective: to use structs, pointers, and dynamic memory allocation to create a binary search algorithm.
1. A struct called Item is created with the members name and id.
2. A dynamic array of Item is created.
3. From a sample data set online of 500 names (https://www.briandunning.com/sample-data/; although you have to convert it to Windows-style line endings because it uses Mac line endings), \<fstream\> is used to read the .csv file line by line.
4. In a for loop, the first and last names are set as members of the Item struct in the array (after removing them with str.erase() from \<algorithms\>), and ids are also given to each.
5. An id is taken to search for (0-499).
6. The binary search is performed using hi, lo, and mid variables (if array[mid] == target, return that name, but if not, adjust hi and lo accordingly to halve the search region, then repeat).
7. The array is deleted.

# Midterm

midterm_bank.cpp:

Objective: to design a bank account class, then test it.
1. A class called BankAccount is created with private members balance and file.
2. A private method called saveToFile() opens file in append mode and determines the transaction from the string passed into it, then appends and closes the file.
3. Public members are the constructor, deposit(), withdraw(), and get(). deposit() and withdraw() update balance (error is thrown if withdraw is too high) and call saveToFile(), and get() returns balance.
4. In main(), a test BankAccount object is made, deposited into, and withdrawn from 2 times, then the balance is printed.

# Module 9

module_9_inventory_array.cpp:

Objective: to create an Item class, populate an array of Items, output them with loops, and search for them by name.
1. A class called Item is created with public members name and quantity, with the default constructor setting them to "" and 0.
2. A function called populate() takes in the inventory array of 10 Items and uses a while loop to take input for name and quantity (exit is typed to stop).
3. A function called display() takes in the inventory array and uses a for loop to print out each Item's name and quantity if the name is not empty.
4. A function called search() takes in the inventory array. A string to search for is inputted, and if found with a for loop, quantity is printed, otherwise a not found message is outputted.
5. In main(), Item inventory[10] is declared, and populate(), display(), and search() are called on it.

# Week 13

week_13_inventory_manager.cpp:

Objective to create a base class called User, derive it, then derive it again while using virtual methods that are overwritten.
1. A base class called User is defined in "week_13_user.h" with a protected member username, a constructor, and a virtual method accessLevel().
2. A derived class called Employee is defined in "week_13_employee.h" by first doing #include "week_13_user.h", then inheriting User, inheriting its constructor, and overwriting accessLevel().
3. The same step is repeated with InventoryManager in "week_13_inventory_manager.cpp", but is inherited from Employee.
4. In main(), an InventoryManager object is instantiated with a username, and accessLevel() is called.
