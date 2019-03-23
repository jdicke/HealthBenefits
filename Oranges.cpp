#pragma once
#include "Food.cpp"

class Oranges : public Food {
public:

	std::string food;

	Oranges() {
		food = "Oranges";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Lower Stroke Risk" << std::endl;
		std::cout << "2. Moderates Blood Pressure" << std::endl;
		std::cout << "3. Hearth Health" << std::endl;
		std::cout << "4. Helps Prevent Diabetes" << std::endl;
		std::cout << "5. Helps fight skin damage" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};