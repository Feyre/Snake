#include "Segment.h"


Segment::Segment() {

}


Segment::~Segment() {

}

Segment::Segment(int x, int y, sf::Color col) {
	setPointCount(3);
	// setPoint(0, sf::Vector2f((x*Delta / 2) + Delta / 2, 	(y*Height) + 0));
	// setPoint(1, sf::Vector2f((x*Delta / 2) + 0, 			(y*Height) + Height));
	// setPoint(2, sf::Vector2f((x*Delta / 2) + Delta, 		(y*Height) + Height));
	setPoint(0, sf::Vector2f((x*Delta / 2) + 0, 			(y*Height) + 0));
	setPoint(1, sf::Vector2f((x*Delta / 2) - Delta/2,	 	(y*Height) + Height));
	setPoint(2, sf::Vector2f((x*Delta / 2) + Delta/2, 		(y*Height) + Height));
	setFillColor(col);
	setOrigin((x*Delta/2)+0, (y*Height)+Height/2);
	setPosition((x*Delta/2)+0, (y*Height)+Height/2);

	if ((x + y) % 2 == 0) {
		rotate(180);
	}
	_pos = sf::Vector2i(x, y);
}