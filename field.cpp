#include "field.hpp"
#include "painter.hpp"
#include <cstdlib>

Field::Field()
{
	for ( int y = 0; y < HEIGHT; ++y )
		for ( int x = 0; x < WIDTH; ++x )
			//if ( x == 0 or x == WIDTH- 1)
			//	m_[ y ][ x ] = WALL;
			//else
				m_[ y ][ x ] = EMPTY;
	newFruit();
}

void Field::setBlock( Type type, int x, int y )
{
	m_[ y ][ x ] = type;
}

Field::Type Field::block( int x, int y ) const
{
	return m_[ y ][ x ];
}

void Field::draw(Painter &p) const
{
	for ( int y = 0; y < HEIGHT; ++y )
		for ( int x = 0; x < WIDTH; ++x )
		{
			switch( m_[ y ][ x ] )
			{
				case EMPTY:
					p.empty( x, y );
					break;
				case SNAKE_BLOCK:
					p.bar( x, y );
					break;
				case FRUIT:
					p.circle( x, y );
					break;
				case WALL:
					p.wall( x, y );
					break;
			}
		}
}

void Field::newFruit()
{
	int x, y;
	do
	{
		x = rand() % WIDTH;
		y = rand() % HEIGHT;
	} while ( block( x, y ) != EMPTY );
	setBlock( FRUIT, x, y );
}
