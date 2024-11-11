#include <iostream>

#include "swarm.hpp"

Swarm::Swarm(Board *board, char mark)
{
  this->board = board;
  this->mark = mark;
}

char Swarm::get_mark()
{
  return this->mark;
}

void Swarm::get_move()
{
  // We need to validate this move!
  // Oops! Shall We Try Again lab
  int move;
  std::cout << "What is your move? ";
  std::cin >> move;
  this->board->move(move, this->mark);
}
