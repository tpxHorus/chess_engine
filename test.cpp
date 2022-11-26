#include "cppchess/board"
#include <cstdio>

int main() {
	chess::BaseBoard board("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR");
	printf("%llu", board.get_all().all);
}