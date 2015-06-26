#include "Player.h"


Player::Player()
{
}


Player::~Player()
{
}

void Player::update() {
	_direction = _cont->getDir;
}

void Player::move() {
	int pastx = _snake[0]._pos.x;
	int pasty = _snake[0]._pos.y;
	bool flipped = ((x+y)%2 == 0);
	sf::Color col(rand() % 255 + 1, rand() % 255 + 1, 255, 255);


	if(_direction == LEFT) {
		_snake.push_back(Segment(pastx-1, pasty, col));
	}
	else if(_direction == RIGHT) {
		_snake.push_back(Segment(pastx+1, pasty, col));
	}




	else if(_direction == UP) {
		if(flipped) {	// if flipped, move up
			_snake.push_back(Segment(pastx, pasty-1, col));
		}
		else {
			if(y%2 == 0) {	// if even, move right
				_snake.push_back(Segment(pastx+1, pasty, col));
			}
			else {	// if odd, move left
				_snake.push_back(Segment(pastx-1, pasty, col));
			}
		}
	}
	else if(_direction == DOWN) {
		if(!flipped) {	// if normal, move down
			_snake.push_back(Segment(pastx, pasty+1, col));
		}
		else {
			if(y%2 == 0) {	// if even, move left
				_snake.push_back(Segment(pastx-1, pasty, col));
			}
			else {	// if odd, move right
				_snake.push_back(Segment(pastx+1, pasty, col));
			}
		}
	}




	else if(_direction == DOWNLEFT) {
		if(flipped) {	// if flipped, move left
			_snake.push_back(Segment(pastx-1, pasty, col));
		}else {			// else move down
			_snake.push_back(Segment(pastx, pasty+1, col));
		}
	}
	else if(_direction == DOWNRIGHT) {
		if(flipped) {	// if flipped, move right
			_snake.push_back(Segment(pastx+1, pasty, col));
		}else {			// else move down
			_snake.push_back(Segment(pastx, pasty+1, col));
		}
	}
	else if(_direction == UPLEFT) {
		if(flipped) {	// if flipped, move up
			_snake.push_back(Segment(pastx, pasty-1, col));
		}else {			// else move left
			_snake.push_back(Segment(pastx-1, pasty, col));
		}
	}
	else if(_direction == UPRIGHT) {
		if(flipped) {	// if flipped, move up
			_snake.push_back(Segment(pastx, pasty-1, col));
		}else {			// else move right
			_snake.push_back(Segment(pastx+1, pasty, col));
		}
	}
}

void Player::draw() {
	//for (int ii = 0; ii < segs.size(); ii++) {
		//window.draw(segs[ii]);
	//}
}

