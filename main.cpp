#include <iostream>

#include "board.hpp"
#include "console.hpp"
#include "game_state.hpp"
#include "validator.hpp"

int main()
{
  Board board;
  GameState game_state(&board);
  Console console(&board);
  Validator validator;
  char mark = 'X';
  int move;

  // Game loop!
  while (game_state.current_state() == "in-progress")
  {
    std::cout << console.display();

    // Validator is getting a move from a user. SHould it have a different name?
    int valid_move = validator.get_move();

    // Should board.move(...) be called inside validator.get_move()?
    board.move(valid_move, mark);

    // Switch up the marks each turn. This will live in Game eventually
    if (mark == 'X')
    {
      mark = 'O';
    }
    else
    {
      mark = 'X';
    }
  }
}
