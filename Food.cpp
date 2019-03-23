// Base class for all foods
#pragma once
#include <iostream>
#include <string>

class Food {
protected:
	std::string food;

public:

	Food() {
		food = "Food";
	}

	virtual std::string getFood() {
		return food;
	}
	virtual void displayBenefits() {
		std::cout << "Nothing" << std::endl;
	}
};