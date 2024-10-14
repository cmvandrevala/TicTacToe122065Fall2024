#include <iostream>
#include <cassert>

#include "board.hpp"
#include "game_state.hpp"

using namespace std;

int main()
{
  Board board;
  GameState game_state(&board);

  assert(game_state.current_state() == "in-progress");

  board.move(1, 'X');
  board.move(2, 'X');
  board.move(3, 'X');

  assert(game_state.current_state() == "X wins");

  board.clear();
  assert(game_state.current_state() == "in-progress");

  board.move(4, 'O');
  board.move(5, 'O');
  board.move(6, 'O');

  assert(game_state.current_state() == "O wins");

  board.clear();
  assert(game_state.current_state() == "in-progress");

  board.move(1, 'O');
  board.move(2, 'O');
  board.move(3, 'O');

  assert(game_state.current_state() == "O wins");

  cout << "All of the tests have passed!" << endl;
  return 0;
}
