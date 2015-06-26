#include "Players.h"


Players::Players()
{
}


Players::~Players()
{
}

void Players::addPlayer(Player player) {
	_players.push_back(player);
}

void Players::update() {
	for (int ii = 0; ii < _players.size(); ii++) {
		_players[ii].update();
	}
}

void Players::move() {
	for (int ii = 0; ii < _players.size(); ii++) {
		_players[ii].move();
	}
}  

void Players::check() {

} 

void Players::draw() {
	for (int ii = 0; ii < _players.size(); ii++) {
		_players[ii].draw();
	}
}  

