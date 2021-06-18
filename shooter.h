#pragma once

#include "ofMain.h"

#define deg2Rad 0.0174533f

enum Direction { LEFT = -1, RIGHT = 1 };

class shooter {

public:
	/* Circle */
	int x, y;
	float radius;

	/* Line */
	int direction;
	int length;
	int offsetX, offsetY;
	int width;
	float angle;
	float speed;

	shooter();
	~shooter();
	
	void update();
	void draw();
};