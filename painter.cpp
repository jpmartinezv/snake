#include "painter.hpp"
#include <ncurses.h>

void Painter::empty( int x, int y )
{
	move(y, x);
	addch(' ');
}

void Painter::bar( int x, int y )
{
	move(y, x);
	addch('#');
}

void Painter::circle( int x, int y )
{
	move(y, x);
	addch('*');
}
