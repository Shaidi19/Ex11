// Copyright Shaidi19 2021

#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

#include <cstdlib>
#include <ctime>
#include <iostream>

class Cage {
  bool light;

 public:
  Cage* next;
  Cage* prev;
  Cage() : light(false), next(nullptr), prev(nullptr) {}
  ~Cage();
  void on() { light = true; }
  void off() { light = false; }
  bool get() const { return light; }
  void set_light(bool l) { light = l; }
};

class Train {
 private:
  Cage* first = nullptr;
  Cage* last = nullptr;

 public:
  Train() {}
  void add_ñage(bool light);
  void print_all_cage();
  unsigned int calculate_length();
};

#endif  // INCLUDE_TRAIN_H_