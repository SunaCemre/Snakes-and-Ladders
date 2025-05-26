#include "Dice.h"
#include<cstdlib>
#include <ctime>

int Dice::Roll() {
	
	

	int Output = (std::rand() % 6) + 1;
	return Output;
};

