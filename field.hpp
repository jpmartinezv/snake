#pragma once

class Painter;

class Field
{
public:
	enum { WIDTH = 50, HEIGHT = 50 };
	enum Type { EMPTY, SNAKE_BLOCK, FRUIT, WALL};
	Field();
	void setBlock(Type type, int x, int y);
	Type block(int x, int y) const;
	void draw(Painter &) const;
	void newFruit();
private:
	Type m_[HEIGHT][WIDTH];
};
