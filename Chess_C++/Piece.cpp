#include "Piece.h"

Piece::Piece(char recName, char recColor)
{
	this->name = recName;
	this->color = recColor;
}

void Piece::showPiece()
{
	std::cout << this->getColor() << this->getName();
}

char Piece::getName()
{
	return name;
}

char Piece::getColor()
{
	return color;
}
