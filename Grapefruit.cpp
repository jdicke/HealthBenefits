#pragma once
#include "Food.cpp"

class Grapefruit : public Food {
public:

	std::string food;

	Grapefruit() {
		food = "Grapefruit";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Low in Calories, High in Nutrients (Vitamin C and A)" << std::endl;
		std::cout << "2. Benefit Immune System" << std::endl;
		std::cout << "3. Aids in weight loss (high in fiber)" << std::endl;
		std::cout << "4. Improves Heart Health" << std::endl;
		std::cout << "5. Powerful Antioxidants: Vitamin C, Beta-carotene (prevents heart disease), \nLycopene (fights cancer), Flavonenes (reduces blood pressure)" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};