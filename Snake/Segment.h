#pragma once

#include <SFML/Graphics.hpp>
#include <math.h>
#define PI 3.14159265
#define Delta (640/32) //32 squares, 20p
#define Height Delta*tan(60*PI/180)/2


class Segment : public sf::ConvexShape
{
private:
	sf::Vector2i _pos;
	sf::Color _col;

public:
	Segment();
	~Segment();
	Segment(int x, int y, sf::Color col);
};

