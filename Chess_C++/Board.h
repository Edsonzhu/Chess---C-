#pragma once
#ifndef _BOARD_H_
#define _BOARD_H_

#include "Square.h"
#include <iostream>

class Board
{
public:
	Board(Piece bishop);
	void showBoard();

private:
	Square square[8][8];

};

#endif // !_BOARD_H_
