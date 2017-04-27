#pragma once
#include"Socket.h"
#include"board.h"
class player
{
public:
	 player(int color):
			 colorflag(color)
	 {}

	int showColor();
	point nextMove(const board& bd);
private:
	 int colorflag;
};

