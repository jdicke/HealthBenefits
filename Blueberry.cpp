#pragma once
#include "Food.cpp"

class Blueberry : public Food {
public:

	std::string food;

	Blueberry() {
		food = "Blueberry";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. High Vitamin C (24%) and Vitamin K (36%) of DV" << std::endl;
		std::cout << "2. King of Antioxidant (Protects against cancer)" << std::endl;
		std::cout << "3. Hearth Health" << std::endl;
		std::cout << "4. Maintain Brain Function and Improve Memory" << std::endl;
		std::cout << "5. Reduce Muscle Damage after Exercise" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};