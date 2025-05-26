#pragma once
#include <iostream>
#include "Board.h"

class Player
{
Board b;
private: 
	std::string color;
	int location;


public:
	Player(std::string color) {
		this->color = color;
		this->location = b.getstart();
	}

	int move(int diceResult);
	
	std::string getColor() {
		return this->color;
	}


};


