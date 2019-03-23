#pragma once
#include "Food.cpp"

class Avocado : public Food {
public:

	std::string food;

	Avocado() {
		food = "Avocado";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. Lots of Potassium (14% DV)" << std::endl;
		std::cout << "2. Heart-Healthy Monounsaturated Fat" << std::endl;
		std::cout << "3. High in Fiber" << std::endl;
		std::cout << "4. Can lower cholesterol" << std::endl;
		std::cout << "5. Powerful Antioxidants : good for eyes" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};