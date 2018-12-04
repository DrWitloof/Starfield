#pragma once

#include "ofMain.h"
#include "Star.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp{

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseEntered(int x, int y);
	void mouseExited(int x, int y);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);
	
	ofxPanel gui_;
	ofParameter<int> framerate_ = 60;
	ofParameter<int> numberOfStars_ = defaultNumberOfStars;
	void numberOfStarsChanged(int & numberOfStars);

private:
	enum { minNumberOfStars = 1, defaultNumberOfStars = 50, maxNumberOfStars = 200 };
	Star stars_[maxNumberOfStars];
};
