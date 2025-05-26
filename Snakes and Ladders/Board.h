#pragma once
class Board
{
private:
	int start = 1;
	int end = 30;
public:
	int getstart();
	int getend();
};

class Snake
{
private:
	int start[3]{ 29,14,21 };
	int end[3]{ 18,4,9 };

	
public:
	int getsize() {
		return sizeof(start) / sizeof(start[0]);
	}

	const int* getstart() const {
		return start;
	}
	const int* getend() const {
		return end;
	}

};

class Ladder
{
private:
	int start[3]{ 2,5,20 };
	int end[3]{ 11,19,25 };


public:
	int getsize() {
		return sizeof(start) / sizeof(start[0]);
	}
	const int* getstart() const {
		return start;
	}
	const int* getend() const {
		return end;
	}

};
