#pragma once
#include <iostream>

class Player
{
private: 
	std::string color;
	int location;

public:
	Player(std::string color) {
		this->color = color;
		this->location = 0;
	}

	void move(int diceResult);


};


