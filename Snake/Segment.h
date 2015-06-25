#pragma once

#include <SFML/Graphics.hpp>

class Segment : public sf::CircleShape
{
private:
	sf::Vector2i _pos;
	sf::Color _col;

public:
	Segment();
	~Segment();
};

