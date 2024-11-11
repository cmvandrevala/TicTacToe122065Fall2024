#pragma once

#include <string>

#include "board.hpp"
#include "player.hpp"

class Pyromancer : public Player
{
private:
  Board *board;
  char mark;

public:
  Pyromancer(Board *board, char mark);
  void get_move();
  char get_mark();
};
