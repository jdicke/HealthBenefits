#pragma once
#include "Food.cpp"

class GarbanzoBeans : public Food {
public:

	std::string food;

	GarbanzoBeans() {
		food = "Garbanzo Beans";
	}

	std::string getFood() {
		return food;
	}

	void displayBenefits() {
		std::cout << "\n-----------------------------------\n" << std::endl;
		std::cout << "\t\t" << getFood() << std::endl;
		std::cout << "1. High in Fiber - Fights Diabetes" << std::endl;
		std::cout << "2. Bone Health" << std::endl;
		std::cout << "3. Helps Maintain Low Blood Pressure" << std::endl;
		std::cout << "4. Heart Health" << std::endl;
		std::cout << "5. Helps with sleep, muscle movement, leaerning, memory" << std::endl;
		std::cout << "\n-----------------------------------\n" << std::endl;
	}
};