#pragma once
#include "Food.cpp"

class ChiaSeeds : public Food {
public:

	std::string food;

	ChiaSeeds() {
		food = "Chia Seeds";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Nutrient Rich with Low Calories" << std::endl;
		std::cout << "2. High Amount of Antioxidants" << std::endl;
		std::cout << "3. Almost all carbs are fiber (Feel full)" << std::endl;
		std::cout << "4. High in Quality Protein (14%) DV" << std::endl;
		std::cout << "5. High in Omega-3 Fatty Acids" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};