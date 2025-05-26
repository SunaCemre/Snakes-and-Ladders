#include "Dice.h"
#include<cstdlib>
#include <ctime>

int Dice::Roll() {
	
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	int Output = (std::rand() % 6) + 1;
	return Output;
};

