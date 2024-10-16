#include <iostream>

#include "validator.hpp"

int Validator::get_move()
{
  int move;
  std::cout << "What is your move? ";
  std::cin >> move;
  return move;
}
