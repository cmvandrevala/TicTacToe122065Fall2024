#include <iostream>

#include "board.hpp"
#include "console.hpp"
#include "game_state.hpp"

int main()
{
  Board board;
  GameState game_state(&board);
  Console console(&board);
  char mark = 'X';
  int move;

  while (game_state.current_state() == "in-progress")
  {
    std::cout << console.display();
    std::cout << "What is your move? ";
    std::cin >> move;
    board.move(move, mark);
    // get some input from the user (with validation)
    // make a move on the board
    // switch the marker from x to o or vice versa
  }
}
