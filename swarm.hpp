#pragma once

#include <string>

#include "board.hpp"
#include "player.hpp"

class Swarm : public Player
{
private:
  Board *board;
  char mark;

public:
  Swarm(Board *board, char mark);
  void get_move();
  char get_mark();
};
