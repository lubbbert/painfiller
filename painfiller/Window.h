#pragma once

#include "SFML/Graphics.hpp"

class Window
{
public:
	Window();
	Window(const std::string& l_title, const sf::Vector2u& l_size);
	~Window();

	void beginDraw();
	void endDraw();
	
	void update();

	bool isDone();
	bool isFullscreen();
	sf::Vector2u windowSize();

	void toggleFullscreen();
	void draw(sf::Drawable& l_drawable);

private:
	void setup(const std::string& l_title, const sf::Vector2u& l_size);
	void destroy();
	void create();

	sf::RenderWindow m_window;
	sf::Vector2u m_windowSize;
	std::string m_windowTitle;
	bool m_isFullscreen;
	bool m_isDone;
};

