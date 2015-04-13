CPPFLAGS=-Wall -g
OBJECTS=main.o painter.o field.o snake.o game.o
TARGET=snake
LDFLAGS=-L/usr/lib -lallegro -lallegro_audio -lallegro_color -lallegro_primitives -lallegro_main


%.o: %.cpp
	g++ -c $(CPPFLAGS) -o $@ $<  $(INCLUDE) $(CFLAGS) $(LDFLAGS)
$(TARGET):  $(OBJECTS)
	g++ $(OBJECTS) -o $(TARGET)  $(INCLUDE) $(CFLAGS) $(LDFLAGS) -g -lncurses
main.o: main.cpp painter.hpp field.hpp
painter.o: painter.cpp painter.hpp
field.o: field.cpp field.hpp painter.hpp
snake.o: snake.cpp snake.hpp field.hpp
game.o: game.cpp game.hpp painter.hpp field.hpp snake.hpp
