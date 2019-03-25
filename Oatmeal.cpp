#pragma once
#include "Food.cpp"

class Oatmeal : public Food {
public:

	std::string food;

	Oatmeal() {
		food = "Oatmeal";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Incredibly Nutritious" << std::endl;
		std::cout << "2. Rich in Antioxidants - Reduce Blood Pressure" << std::endl;
		std::cout << "3. Powerful Fiber - Beta Glucan (Feel Full)" << std::endl;
		std::cout << "4. Lower Cholesterol Levels" << std::endl;
		std::cout << "5. Improve Blood Sugar Control" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};