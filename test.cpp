#include <stdlib.h>
#include <stdio.h>
#include <curses.h>

int main(void) {
	WINDOW * mainwin;

	/*  Initialize ncurses  */

	if ( (mainwin = initscr()) == NULL ) {
		fprintf(stderr, "Error initialising ncurses.\n");
		exit(EXIT_FAILURE);
	}

	move(10, 15);
	addch('X');
	refresh();

	getch();

	delwin(mainwin);
	endwin();
	refresh();

	return EXIT_SUCCESS;
}
