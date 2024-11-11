#pragma once

#include <string>

#include "board.hpp"
#include "player.hpp"

class HumanPlayer : public Player
{
private:
  Board *board;
  char mark;

public:
  HumanPlayer(Board *board, char mark);
  void get_move();
  char get_mark();
};
