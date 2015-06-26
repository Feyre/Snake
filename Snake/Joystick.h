#pragma once

#include <SFML/Graphics.hpp>
#include "Controls.h"

class Joystick : public Controls
{
private:
	unsigned char _num;

public:
	Joystick();
	~Joystick();
	unsigned char getDir();
};

