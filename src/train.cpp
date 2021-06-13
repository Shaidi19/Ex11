// Copyright Shaidi19 2021

#include "train.h"

Cage::~Cage() { delete this; }

void Train::add_ñage(bool light) {
  Cage* adding_cage = new Cage();
  adding_cage->set_light(light);
  if (!first && !last) {
    first = adding_cage;
    last = adding_cage;
    adding_cage->prev = adding_cage;
    adding_cage->next = adding_cage;
    return;
  }
  first->prev = adding_cage;
  last->next = adding_cage;
  adding_cage->prev = last;
  adding_cage->next = first;
  last = adding_cage;
}

size_t Train::calculate_length() {
  if (first == nullptr) {
    return 0;
  }
  first->off();
  Cage* ptr = first;
  unsigned int i = 0;
  while (true) {
    ptr = ptr->next;
    i++;
    if (ptr->get() == false) {
      ptr->on();
      if (first->get() == true) return i;
    }
  }
}

void Train::print_all_cage() {
  Cage* ptr = first;
  unsigned int i = 0;
  while (ptr != first->prev) {
    std::cout << i << ":"
              << "there is " << ((ptr->get()) ? ("on") : ("off"))
              << "light" << std::endl;
    ++i;
    ptr = ptr->next;
    if (ptr == first) break;
  }
  std::cout << std::endl;
}