#pragma once

#include <string>

#include "board.hpp"
#include "player.hpp"

class HumanPlayer : public Player
{
private:
  Board *board;

public:
  char mark;
  HumanPlayer(Board *board, char mark);
  void get_move();
};
