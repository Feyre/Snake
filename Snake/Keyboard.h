#pragma once

#include <SFML/Graphics.hpp>
#include "Controls.h"

class Keyboard : public Controls
{
private:
	sf::Key up;
	sf::Key down;
	sf::Key left;
	sf::Key uright;

public:
	Keyboard();
	~Keyboard();
	Keyboard(up,down,left,right);
	unsigned char getDir();
};

