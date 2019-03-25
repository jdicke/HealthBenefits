#pragma once
#include "Food.cpp"

class Tofu : public Food {
public:

	std::string food;

	Tofu() {
		food = "Tofu";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Reduce Levels of Bad Cholesterol" << std::endl;
		std::cout << "2. High in Protein (for vegans)" << std::endl;
		std::cout << "3. Reduce Bone Loss" << std::endl;
		std::cout << "4. May Prevent Liver Damage" << std::endl;
		std::cout << "5. High in Nutrients" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};