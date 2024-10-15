#include "game_state.hpp"

GameState::GameState(Board *board)
{
  this->board = board;
}

std::string GameState::current_state()
{
  std::string output = "";
  if (board->get_mark(1) == board->get_mark(2) && board->get_mark(2) == board->get_mark(3))
  {
    output += board->get_mark(1);
    output += " wins";
  }
  else if (board->get_mark(4) == board->get_mark(5) && board->get_mark(5) == board->get_mark(6))
  {
    output += board->get_mark(4);
    output += " wins";
  }
  else if (board->get_mark(1) == board->get_mark(4) && board->get_mark(4) == board->get_mark(7))
  {
    output += board->get_mark(4);
    output += " wins";
  }
  else
  {
    output = "in-progress";
  }
  return output;
}
