#pragma once

#include <vector>

class WinningCombos
{
private:
  std::vector<std::vector<int>> winning_combos;

public:
  WinningCombos()
  {
    std::vector<int> combo_one;
    combo_one.push_back(1);
    combo_one.push_back(2);
    combo_one.push_back(3);
    this->winning_combos.push_back(combo_one);

    std::vector<int> combo_two;
    combo_two.push_back(4);
    combo_two.push_back(5);
    combo_two.push_back(6);
    this->winning_combos.push_back(combo_two);

    // this->winning_combos[2][0] = 7;
    // this->winning_combos[2][1] = 8;
    // this->winning_combos[2][2] = 9;

    // this->winning_combos[3][0] = 1;
    // this->winning_combos[3][1] = 4;
    // this->winning_combos[3][2] = 7;

    // this->winning_combos[4][0] = 2;
    // this->winning_combos[4][1] = 5;
    // this->winning_combos[4][2] = 8;

    // this->winning_combos[5][0] = 3;
    // this->winning_combos[5][1] = 6;
    // this->winning_combos[5][2] = 9;

    // this->winning_combos[6][0] = 1;
    // this->winning_combos[6][1] = 5;
    // this->winning_combos[6][2] = 9;

    // this->winning_combos[7][0] = 3;
    // this->winning_combos[7][1] = 5;
    // this->winning_combos[7][2] = 7;
  }
};
