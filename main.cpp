#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <curses.h>
#include "painter.hpp"
#include "game.hpp"

Game game;

int main()
{
	WINDOW * mainwin;
	
	Painter p;
	char c;

	/*  Initialize ncurses  */

	if ( (mainwin = initscr()) == NULL ) {
		fprintf(stderr, "Error initialising ncurses.\n");
		exit(EXIT_FAILURE);
	}

	initscr();
	nodelay(stdscr, true);
	keypad(stdscr, true);
	noecho();
	curs_set(0);
	
	while(1)
	{
		c = getch();
		switch ( c )
		{
			case 'q':
				delwin(mainwin);
				endwin();
				refresh();
				return EXIT_SUCCESS;
			case 'd':
				game.keyEvent(Snake::RIGHT);
				break;
			case 'w':
				game.keyEvent(Snake::UP);
				break;
			case 'a':
				game.keyEvent(Snake::LEFT);
				break;
			case 's':
				game.keyEvent(Snake::DOWN);
				break;
			default:
				break;
		}
		game.tick();
		game.draw(p);
		refresh();
		usleep(250000);
	}

	return EXIT_SUCCESS;
}
