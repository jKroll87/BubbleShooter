#include "shooter.h"

shooter::shooter() {
	x = 512; y = 500;
	radius = 10.0f;

	direction = RIGHT;
	length = 100;
	width = 5;
	angle = 210.0f;
	speed = 1.0f;
}

shooter::~shooter() {

}

void shooter::update() {
	if (angle >= 330.0f) {
		direction = LEFT;
	}
	else if (angle <= 210.0f) {
		direction = RIGHT;
	}

	angle += speed * direction;

	float radAngle = angle * deg2Rad;

	offsetX = length * cos(radAngle);
	offsetY = length * sin(radAngle);
}

void shooter::draw() {
	ofSetColor(ofColor::red);

	ofDrawCircle(x, y, radius);

	ofSetLineWidth(width);
	ofDrawLine(x, y, x + offsetX, y + offsetY);
}