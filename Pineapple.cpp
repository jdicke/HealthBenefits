#pragma once
#include "Food.cpp"

class Pineapple : public Food {
public:

	std::string food;

	Pineapple() {
		food = "Pineapple";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. High in nutrients: Vitamin C (131%) DV [One cup]" << std::endl;
		std::cout << "2. Disease Fighting Antioxidants" << std::endl;
		std::cout << "3. Eases Digestion" << std::endl;
		std::cout << "4. May Boost Immunity and Suppress Inflammation" << std::endl;
		std::cout << "5. Eye Health" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};