// testing sfml basics
// Graphics, Audio, Network.
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Segment.h"
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	//sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "SFML Application", sf::Style::None);
	sf::RenderWindow window(sf::VideoMode(640, 480), "BMTron", sf::Style::Default, settings);

	if (sf::Joystick::isConnected(0)) {
		cout << "Joystick 0 connected.\n";
	}

	srand(time(NULL));
	vector<Segment> segs;
	for (int ii = 0; ii <= 2*640/Delta+1; ii++) {
		for (int jj = 0; jj <= 480/Height*1.3; jj++) {
			int adj = rand() % 50 + 1-25;
			//segs.push_back(Segment(ii, jj, sf::Color(rand() % 50 + 1+adj, rand() % 100 - 50 + 128+adj, rand() % 55 + 151+adj, 255)));
			segs.push_back(Segment(ii, jj, sf::Color(rand() % 255 + 1, rand() % 255 + 1, 255, 255)));
		}
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
		for (int ii = 0; ii < segs.size(); ii++) {
			window.draw(segs[ii]);
		}
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