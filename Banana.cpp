#pragma once
#include "Food.cpp"

class Banana : public Food {
public:

	std::string food;

	Banana() {
		food = "Banana";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Good Nutrients : Vitamin B6 (33%) DV" << std::endl;
		std::cout << "2. Moderates Blood Sugar Levels" << std::endl;
		std::cout << "3. Hearth Health" << std::endl;
		std::cout << "4. Digestive Health" << std::endl;
		std::cout << "5. Helps you feel more full" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};