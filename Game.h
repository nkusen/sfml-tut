#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Game {
private:
	int height, width;
	sf::RenderWindow* window;
	sf::CircleShape shape;
public:
	Game();
	~Game();

	bool windowOpen();
	void pollEvents();
	void update();
	void render();
};

