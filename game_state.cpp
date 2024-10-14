#include "game_state.hpp"

GameState::GameState(Board *board)
{
  this->board = board;
}

std::string GameState::current_state()
{
  if (board->get_mark(1) == board->get_mark(2) && board->get_mark(2) == board->get_mark(3))
  {
    return ""; // board->get_mark(1) + " wins"; this code does not work! Figure out how to make it work...
  }
  else if (board->get_mark(4) == 'O' && board->get_mark(5) == 'O' && board->get_mark(6) == 'O')
  {
    return "O wins";
  }
  else
  {
    return "in-progress";
  }
}
