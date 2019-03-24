#pragma once
#include "Food.cpp"

class Spinach : public Food {
public:

	std::string food;

	Spinach() {
		food = "Spinach";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. High Source of Iron" << std::endl;
		std::cout << "2. Anti-Inflammatory and Anti-Cancerous" << std::endl;
		std::cout << "3. High Vitamin K, A, C, and Folate" << std::endl;
		std::cout << "4. Calcium (250 mg) per cup" << std::endl;
		std::cout << "5. Lowering Blood Pressure" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};