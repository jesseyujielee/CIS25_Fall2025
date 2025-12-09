#include <iostream>
#include <string>
#include <fstream>

class fileReader {

private:
	std::string fileName{};

public:
	fileReader(std::string inputFileName) {
		fileName = inputFileName;
	}

	// Method for getting a number of results that are at least the number of stars provided
	void getReviews(float leastStars, int number) {
		std::ifstream file{};
		file.open(fileName);

		std::string brand{};
		std::string variety{};
		std::string style{};
		std::string country{};
		std::string stars{};
		std::string _{};

		// Skip headers
		std::getline(file, _, '\n');
		std::cout << "Brand, variety (style) from country (stars):\n";

		// Count up to the number provided and get that number of reviews
		int counter{ 0 };
		while (counter < number) {
			std::getline(file, _, ',');
			std::getline(file, brand, ',');
			std::getline(file, variety, ',');
			std::getline(file, style, ',');
			std::getline(file, country, ',');
			std::getline(file, stars, ',');
			std::getline(file, _, '\n');

			float starsFloat = std::stof(stars);
			if (starsFloat >= leastStars) {
				counter++;
				std::cout << brand << ", " << variety << " (" << style << ") from " << country << " (" << stars << "*)\n";
			}
		}
	}
};

int main() {

	// Create a fileReader object for the ramen csv file
	fileReader ramen("C:/Users/ylee4/source/repos/CIS25_Fall2025/Week 15/ramen ratings/ramen-ratings.csv");
	ramen.getReviews(3.5, 10);

	return 0;
}