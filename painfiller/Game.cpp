#include "Game.h"

Game::Game() : m_window("Painfiller", sf::Vector2u(800, 600))
{
}

Game::~Game()
{
}

void Game::handleInput()
{
}

void Game::update()
{
	m_window.update();
}

void Game::render()
{
	m_window.beginDraw();

	m_window.endDraw();
}

Window* Game::window()
{
	return &m_window;
}
