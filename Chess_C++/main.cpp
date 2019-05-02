
#include "Board.h"

int main(int argc, char *argv[]) {
	Piece b('b', 'W');
	Board board(b);

	board.showBoard();
	return 0;
}