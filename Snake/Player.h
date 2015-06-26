#pragma once

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "Segment.h"
using std::string;
using std::vector;

class Player
{
private:
	string _name;
	sf::Color _col;
	vector<Segment> _snake;
	unsigned char _direction;

public:
	Player();
	~Player();

	void update();
	void move();
	void draw();
};

