#pragma once
#include "Food.cpp"

class Granola : public Food {
public:

	std::string food;

	Granola() {
		food = "Granola";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Improves Digestion" << std::endl;
		std::cout << "2. Promotes Weight Loss" << std::endl;
		std::cout << "3. Improves Energy Levels" << std::endl;
		std::cout << "4. Reduces Cholesterol Levels" << std::endl;
		std::cout << "5. Great Source of Vegan Protein" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};