#include "Square.h"

Square::Square() {
	this->piece = false;
	this->catchByBlack = 0;
	this->catchByWhite = 0;
}

bool Square::hasPiece()
{
	return this->piece;
}

void Square::addPiece()
{
	this->piece = true;
}

void Square::removePiece()
{
	this->piece = false;
}

void Square::addCatchByWhite()
{
	this->catchByWhite++;
}

void Square::removeCatchByWhite()
{
	this->catchByWhite--;
}

void Square::addCatchByBlack()
{
	this->catchByBlack++;
}

void Square::removeCatchByBlack()
{
	this->catchByBlack--;
}

bool Square::checkCatchByWhite()
{
	return this->catchByWhite;
}

bool Square::checkCatchByBlack()
{
	return this->catchByBlack;
}
