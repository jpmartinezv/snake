#pragma once
#include "snake.hpp"
#include "field.hpp"
#include <vector>

class Painter;

class Game
{
public:
  void update(std::vector< std::pair<int, int> > walls);
  void tick();
  void draw(Painter &) const;
  void keyEvent(Snake::Direction);
private:
  Field field_;
  Snake snake_;
};
