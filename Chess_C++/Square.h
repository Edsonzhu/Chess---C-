#pragma once
#ifndef _SQUARE_H_
#define _SQUARE_H_
#include "Piece.h"

class Square
{
public:
	Square();
	bool hasPiece();
	void showPiece();
	void addPiece(Piece *recPiece);
	void removePiece();
	void addCatchByWhite();
	void removeCatchByWhite();
	void addCatchByBlack();
	void removeCatchByBlack();
	bool checkCatchByWhite();
	bool checkCatchByBlack();

private:
	Piece* piece;
	int catchByWhite;
	int catchByBlack;
};

#endif // !_SQUARE_H_