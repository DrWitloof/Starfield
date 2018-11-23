#include "ofApp.h"


//--------------------------------------------------------------
<<<<<<< HEAD
void ofApp::setup()
{
	framerate.addListener(this, &ofApp::framerateChanged);
	gui.setup();
	gui.add(Star::color_.set("color", ofColor(100, 100, 140), ofColor(0, 250), ofColor(250, 250)));
	gui.add(Star::dev_.set("deviation", 0.1f, 0.001f, 1.0f));
	gui.add(framerate.set("framerate", 60, 1, 60));
=======
void ofApp::setup(){
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66

	ofSetCircleResolution(50);
	ofBackground(0, 0, 0);
	ofSetWindowTitle("starfield");

<<<<<<< HEAD
	ofSetFrameRate(framerate); 

	for (int i = 0; i < 3; i++)
	{
		Star *star = new Star();
		star->setup();
=======
	ofSetFrameRate(60); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.

	for (int i = 0; i < 200; i++)
	{
		Star *star = new Star();
		star->initRandom();
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
		stars_.push_back(star);
	}
}

//--------------------------------------------------------------
void ofApp::update()
{
<<<<<<< HEAD
	for (auto star : stars_) star->update();
=======
	for (auto star : stars_) star->step();
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for (auto star : stars_) star->draw();
<<<<<<< HEAD
	gui.draw();
}

void ofApp::framerateChanged(int & circleResolution) 
{
	ofSetFrameRate(framerate);
=======
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	Star *star = new Star();
<<<<<<< HEAD
	star->setup();
=======
	star->initRandom();
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
	stars_.push_back(star);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
