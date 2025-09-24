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

Objective: to create a 3-choice menu for number operations using loops (while, do-while, & for) and headers
1. Headers for functions are declared.
2. Input is taken for the menu choice in a do-while loop.
3. If choice is 1, the loop ends and the program terminates.
4. If choice is 2, the greatest digit is found via a while loop that continually takes the remainder of the number divided by 10, compares it to the greatest, updates if needed, then integer divides the number by 10.
5. If choice is 3, exponentiation is done via a for loop that continually multiplies the result (starts at 1 in case exp is 0) by the base the number of times of the absolute value of the exponent.
6. If the exponent is negative, the reciprocal of the result is returned, otherwise the result is returned.
