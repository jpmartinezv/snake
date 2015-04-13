#include "painter.hpp"
#include <allegro5/allegro_primitives.h>
#include <iostream>

const int BOUNCER_SIZE = 20;

void Painter::empty( int x, int y )
{
	al_draw_filled_rectangle(BOUNCER_SIZE * x + 2, BOUNCER_SIZE * y + 2, BOUNCER_SIZE * (x + 1) - 2, BOUNCER_SIZE * (y + 1) - 2,  al_map_rgb(0, 0, 0));
}

void Painter::bar( int x, int y )
{
	//al_draw_filled_rectangle(BOUNCER_SIZE * x, BOUNCER_SIZE * y, BOUNCER_SIZE * (x + 1), BOUNCER_SIZE * (y + 1),  al_map_rgb(255, 255, 0));
		al_draw_filled_rectangle(BOUNCER_SIZE * x + 2, BOUNCER_SIZE * y + 2, BOUNCER_SIZE * (x + 1) - 2, BOUNCER_SIZE * (y + 1) - 2,  al_map_rgb(255, 255, 0));
}

void Painter::circle( int x, int y )
{
	al_draw_filled_circle(BOUNCER_SIZE * x + BOUNCER_SIZE/2, BOUNCER_SIZE * y + BOUNCER_SIZE/2, BOUNCER_SIZE/2, al_map_rgb(255, 0, 0));
}

void Painter::wall( int x, int y )
{
	al_draw_filled_rectangle(BOUNCER_SIZE * x + 2, BOUNCER_SIZE * y + 2, BOUNCER_SIZE * (x + 1) - 2, BOUNCER_SIZE * (y + 1) - 2,  al_map_rgb(200, 200, 200));
}
