// testing sfml basics
// Graphics, Audio, Network.
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

int main(){
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	// sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML Application", sf::Style::None);
	sf::RenderWindow window(sf::VideoMode(640, 480), "BMTron", sf::Style::Default, settings);
	sf::Vector2u size = window.getSize();
	unsigned int width = size.x;
	unsigned int height = size.y;

	if (sf::Joystick::isConnected(0)) {
		cout << "Joystick 0 connected.\n";
	}

	sf::CircleShape triangle(100, 3);
	triangle.setFillColor(sf::Color(15, 155, 50, 255));
	triangle.setPosition(0,0);

	int radius = 50;
	int x = 150;
	int y = 150;

	sf::ConvexShape triangle2;
	triangle2.setPointCount(3);
	triangle2.setPoint(0, sf::Vector2f(x, y-radius/2));
	triangle2.setPoint(1, sf::Vector2f(x-radius/2, y+radius/2));
	triangle2.setPoint(2, sf::Vector2f(x+radius/2, y+radius/2));

	while (window.isOpen()) {
		sf::Event event;

		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
				window.close();
		}

		window.clear();
		window.draw(triangle);
		window.draw(triangle2);
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