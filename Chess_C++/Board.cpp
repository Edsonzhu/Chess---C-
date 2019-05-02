#include "Board.h"

Board::Board(Piece bishop)
{
	// initialize the board with the chess pieces on it initial position
	square[0][2].addPiece(&bishop);
}

void Board::showBoard()
{   //draw the board with th pieces
	for (int i = 0; i<8;i++)
	{                 
		std::cout << "---------------------------------" << std::endl;
		for (int j = 0; j < 8; j++)
		{
			std::cout << "|";
			if (square[i][j].hasPiece())
			{
				square[i][j].showPiece();
			}
			else
			{
				std::cout << "  ";
			}
			std::cout << " ";
		}
		std::cout << "|" << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
}
