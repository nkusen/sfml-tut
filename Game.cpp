#include "Game.h"

Game::Game() : height{ 600 }, width{ 800 }, window{ nullptr }, shape{ 100.f } {
    window = new sf::RenderWindow(sf::VideoMode(width, height), "My window", sf::Style::Titlebar | sf::Style::Close);
    shape.setFillColor(sf::Color(0, 90, 255, 150));
}

Game::~Game() {
    window->close();
    delete window;
}

bool Game::windowOpen() {
    return window->isOpen();
}

void Game::pollEvents() {
    sf::Event event;
    while (window->pollEvent(event)) {
        switch (event.type) {

            case sf::Event::Closed:
                window->close();
                break;
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape)
                    window->close();
                break;

        }
    }
}

void Game::update() {
    pollEvents();
}

void Game::render() {
    window->clear(sf::Color(20, 5, 0, 255));
    window->draw(shape);
    window->display();
}
