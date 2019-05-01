#pragma once
#ifndef _SQUARE_H_
#define _SQUARE_H_

class Square
{
public:
	Square();
	bool hasPiece();
	void addPiece();
	void removePiece();
	void addCatchByWhite();
	void removeCatchByWhite();
	void addCatchByBlack();
	void removeCatchByBlack();
	bool checkCatchByWhite();
	bool checkCatchByBlack();

private:
	bool piece;
	int catchByWhite;
	int catchByBlack;
};

#endif // !_SQUARE_H_