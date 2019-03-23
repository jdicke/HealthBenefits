#pragma once
#include "Food.cpp"

class Beets : public Food {
public:

	std::string food;

	Beets() {
		food = "Beets";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Can Improve Athletic Performance" << std::endl;
		std::cout << "2. Fights Inflammation" << std::endl;
		std::cout << "3. Hearth Health" << std::endl;
		std::cout << "4. Digestive Health" << std::endl;
		std::cout << "5. Brain Health" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};