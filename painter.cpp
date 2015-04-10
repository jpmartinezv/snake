#include "painter.hpp"
#include <ncurses.h>

void Painter::empty( int x, int y )
{
	attron(COLOR_PAIR(2));
	move(y, x);
	addch(' ');
}

void Painter::bar( int x, int y )
{
	attron(COLOR_PAIR(1));
	move(y, x);
	addch(' ');
}

void Painter::circle( int x, int y )
{
	attron(COLOR_PAIR(3));
	move(y, x);
	addch(' ');
}

void Painter::wall( int x, int y )
{
	attron(COLOR_PAIR(1));
	move(y, x);
	addch(' ');
}
