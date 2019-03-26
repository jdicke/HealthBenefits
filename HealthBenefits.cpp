// HealthBenefits.cpp : Education Program that tells you benefits for
// a variety of foods
// @ Joseph Dicke
#pragma once
#include <iostream>
#include<string>
#include "Avocado.cpp"
#include "Blueberry.cpp"
#include "Beets.cpp"
#include "Banana.cpp"
#include "Oranges.cpp"
#include "ChiaSeeds.cpp"
#include "Pineapple.cpp"
#include "Granola.cpp"
#include "Spinach.cpp"
#include "GarbanzoBeans.cpp"
#include "Mushroom.cpp"
#include "Tofu.cpp"
#include "Oatmeal.cpp"
#include "Grapefruit.cpp"

int main()
{
    std::cout << "Choose a food to learn about it's health benefits." << std::endl;

	std::cout << "Learn about:" << std::endl;

	Avocado a;
	Blueberry b;
	Beets beet;
	Banana banana;
	Oranges orange;
	ChiaSeeds chia;
	Pineapple pineapple;
	Granola granola;
	Spinach spinach;
	GarbanzoBeans garbanzobeans;
	Mushroom mushroom;
	Tofu tofu;
	Oatmeal oatmeal;
	Grapefruit grapefruit;

	int counter = 1, input = 1;

	Food *foodList[] = { &a, &b, &beet, &banana, &orange, &chia, &pineapple, &granola, 
						&spinach, &garbanzobeans, &mushroom, &tofu, &oatmeal, &grapefruit };

	for (Food *food : foodList) {
		std::cout << counter << ".\t" << food->getFood() << std::endl;
		counter++;
	}

	// Get which food the user wants to learn about
	std::cin >> input;
	counter = 1;

	// Go through the food list and bring up the information on the food.
	for (Food *food : foodList) {
		if (input == counter) {
			food->displayBenefits();
			break;
		}
		counter++;
	}

	return 0;
}