// testing sfml basics
// Graphics, Audio, Network.
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main(){

	// sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML Application", sf::Style::None);
	sf::RenderWindow window(sf::VideoMode(640, 480), "BMTron", sf::Style::Default);
	sf::Vector2u size = window.getSize();
	unsigned int width = size.x;
	unsigned int height = size.y;

	if (sf::Joystick::isConnected(0)) {
		cout << "Joystick 0 connected.\n";
	}

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
				window.close();
		}

		window.clear();
		//window.draw(sprite);
		window.display();
	}
	return 0;
}



















// Full screen = sf::Style::Fullscreen
// bordered = sf::Style::None, window.setSize(sf::Vector2u(x,y)), sindow.setPosition(sf::Vector2i(0,0))

// SLEEP:
// Windows: <windows.h> Sleep(mili)
// UNIX:	<unistd.h>  usleep(micro)
// BETTER: 

// EVENTS
// close, lost focus, gained focus, resized, text entered, keypressed, key released

// INPUT
// events = this button was pressed, mouse was mooved, etc..
// realtime = is this button pressed, where is the mouse