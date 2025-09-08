# Info

Programs for CIS 25 fall semester of 2025 at Laney. New code is in branches.

# Week 3

week_3.cpp:
1) Input is taken for the name of the item as a string and stores it as a variable.
2) Input is taken for the quantity of the item as an integer and stores it as a variable.
3) If std::cin fails (due to an invalid type), it is cleared and reset, then it tries again via a while loop that only breaks when std::cin is not 0.
4) Input is taken for the cost of the item as a float and stores it as a variable.
5) Same as 3).
6) It prints the name of the item, the quantity entered, and the total cost (quantity * cost).
