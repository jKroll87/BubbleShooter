#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {
	ofBackground(ofColor::black);

	lineLength = 100;
	theta = 210.0f;
	flag = 1;
}

//--------------------------------------------------------------
void ofApp::update() {

	theta += 1.0f * flag;

	if (theta >= 330.0f) {
		flag = -1;
	}
	else if (theta <= 210.0f) {
		flag = 1;
	}

	float deg2Rad = 0.0174533f;
	float radTheta = theta * deg2Rad;

	x2 = lineLength * cos(radTheta);
	y2 = lineLength * sin(radTheta);
}

//--------------------------------------------------------------
void ofApp::draw() {
	ofSetColor(ofColor::red);

	ofDrawCircle(512, 500, 10);

	ofSetLineWidth(5);
	ofDrawLine(512, 500, 512 + x2, 500 + y2);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
