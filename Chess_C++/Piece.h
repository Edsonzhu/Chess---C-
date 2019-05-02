#ifndef _PIECE_H_
#define _PIECE_H_
#include <iostream>

class Piece
{
public:
	Piece(char recName, char recColor);
	//virtual void moves() = 0;
	void showPiece();
	char getName();
	char getColor();

private:
	char name;
	char color;
};

#endif // !_PIECE_H_
