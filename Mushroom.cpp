#pragma once
#include "Food.cpp"

class Mushroom : public Food {
public:

	std::string food;

	Mushroom() {
		food = "Mushrooms";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. High in Nutrients (Fiber and Protein)" << std::endl;
		std::cout << "2. Boost Immunity" << std::endl;
		std::cout << "3. High in Antioxidants" << std::endl;
		std::cout << "4. Improves Digestion" << std::endl;
		std::cout << "5. Fights Cancer" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};