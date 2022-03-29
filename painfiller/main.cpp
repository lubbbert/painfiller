#include "Game.h"

int main(int argc, char** argv[])
{
	Game game;
	while (!game.window()->isDone())
	{
		game.handleInput();
		game.update();
		game.render();
	}
	return 0;
}