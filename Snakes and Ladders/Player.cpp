#include "Player.h"
#include "Board.h"

int Player::move(int diceResult) {
	Snake S;
	Ladder L;
	const int* Snake_start = S.getstart();
	const int* Snake_end = S.getend();
	const int* Ladder_start = L.getstart();
	const int* Ladder_end = L.getend();


	location += diceResult;

	for (size_t i = 0; i < S.getsize(); i++)
	{
		if (location == Snake_start[i])
		{
			location = Snake_end[i];
			return location;
		}
	}

	for (size_t i = 0; i < L.getsize(); i++)
	{
		if (location == Ladder_start[i])
		{
			location = Ladder_end[i];
			return location;
		}
	}



	return location;
}