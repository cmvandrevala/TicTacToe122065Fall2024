#pragma once

#include <string>

#include "board.hpp"

class GameState
{
private:
  Board *board;

public:
  GameState(Board *board);
  std::string current_state();
};
