#pragma once

#include <SFML/Graphics.hpp>

class Segment
{
private:
	sf::Vector2i _pos;
	sf::Color _col;

public:
	Segment();
	~Segment();
};

