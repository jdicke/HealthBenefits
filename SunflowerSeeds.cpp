#pragma once
#include "Food.cpp"

class SunflowerSeeds : public Food {
public:

	std::string food;

	SunflowerSeeds() {
		food = "Sunflower Seeds";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Help Improve Cholesterol Levels - Rich source of fats" << std::endl;
		std::cout << "2. Help Support Bone Health - Magnesium, phosphorus, and copper" << std::endl;
		std::cout << "3. Help Control Blood Sugar" << std::endl;
		std::cout << "4. Healthy Detoxification - Selenium helps removal of waste from the body" << std::endl;
		std::cout << "5. Supports Good Mood and Restful Sleep (Magnesium)" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};