#include <iostream>
#include "Dice.h"
#include "Player.h"
#include <string>
#include <ctime>

int main() {
	std::srand(static_cast<unsigned>(std::time(nullptr)));
	Dice dice;

	Board board;

	Player players[2] = { Player("blue") ,Player("red") };

	bool winner_notfound = true;

	while (winner_notfound)
	{
		for (size_t i = 0; i < sizeof(players) / sizeof(players[0]); i++)
		{
			int result = dice.Roll();
			int location = players[i].move(result);
			
			std::cout << "dice roll is = " + std::to_string(result) << std::endl;
			std::cout << "Player " + players[i].getColor() + " is on tile "  + std::to_string(location)<< std::endl;

			if (location >= board.getend())
			{
				winner_notfound = false;
				std::cout << "Player " + players[i].getColor() + " is the winner" << std::endl;
				break;
			}
		}
		



	}
	

	

	return 0;
}