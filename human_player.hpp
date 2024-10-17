#include <string>

#include "board.hpp"

class HumanPlayer
{
private:
  Board *board;
  char mark;

public:
  HumanPlayer(Board *board, char mark);
  void get_move();
};
