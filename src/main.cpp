// Copyright Shaidi19 2021

#include <iostream>
#include <string>

#include "train.h"

int main() { 
    Train new_train;
    srand(time(nullptr));
    for (unsigned int i = 0; i < 6; ++i) {
      int temp = std::rand() % 2;
      if (temp == 1)
        new_train.add_ñage(true);
      else
        new_train.add_ñage(false);
    }
    new_train.print_all_cage();
    std::cout <<  new_train.calculate_length() << std::endl;
	return 0;
}
