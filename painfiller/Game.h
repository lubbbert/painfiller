#pragma once

#include "Window.h"
#include "Scene.h"

class Game
{
public:
	Game();
	~Game();

	void handleInput();
	void update();
	void render();
	Window* window();

private:
	Window m_window;
	Scene m_currentScene;
};

