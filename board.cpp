#include "board.hpp"

void Board::move(int i, char m)
{
  if (i > 0 && i < 10)
  {
    this->moves[i - 1] = m;
  }
}

char Board::get_mark(int i)
{
  return this->moves.at(i - 1);
}
