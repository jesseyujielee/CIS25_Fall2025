# include <iostream>

int week_4_largest_number() {
    std::cout << "Enter 3 numbers: ";
    float x{}, y{}, z{};
    std::cin >> x >> y >> z;

    if (x >= y)
        if (x >= z)
            std::cout << x << " is the largest number.\n";
        else
            std::cout << z << " is the greatest number.\n";
    else if (y >= z)
        std::cout << y << " is the greatest number.\n";
    else
        std::cout << z << " is the greatest number.\n";

    return 0;
}
