#pragma once

#include "Player.h"

class Players
{
private:
	vector<Player> _players;

public:
	Players();
	~Players();

	void addPlayer(Player player);

	void update(); //update dir
	void move();   //update segs
	void check();  //check collisions
	void draw();   //draw shapes
};

