#include "Square.h"

Square::Square() {
	this->piece = nullptr;
	this->catchByBlack = 0;
	this->catchByWhite = 0;
}

bool Square::hasPiece()
{
	return piece == nullptr ? false : true;
}

void Square::showPiece()
{
	this->piece->showPiece();
}

void Square::addPiece(Piece* recPiece)
{
	this->piece = recPiece;
}

void Square::removePiece()
{
	this->piece = 0;
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
