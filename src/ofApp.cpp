#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	numberOfStars_.addListener(this, &ofApp::numberOfStarsChanged);

	gui_.setup();
	gui_.add(Star::color_.set("color", ofColor(100, 100, 140), ofColor(0, 250), ofColor(250, 250)));
	gui_.add(Star::lerpspeed_.set("lerpspeed", 0.1f, 0.001f, 1.0f));
	gui_.add(Star::dev_.set("deviation", 0.1f, 0.001f, 1.0f));
	gui_.add(Star::speed_.set("speed", 2.0f, 0.0f, 4.0f));
	gui_.add(Star::radius_step_.set("radius growth speed", 0.01f, 0.001f, 0.5f));
	gui_.add(numberOfStars_.set("# stars", defaultNumberOfStars, minNumberOfStars, maxNumberOfStars));

	ofSetCircleResolution(50);
	ofBackground(0, 0, 0);
	ofSetWindowTitle("starfield");

	ofSetFrameRate(framerate_); 

	for (int i = 0; i < numberOfStars_; i++) stars_[i].setup();
}

//--------------------------------------------------------------
void ofApp::update()
{
	for (int i = 0; i < numberOfStars_; i++) stars_[i].update();
	
	static int log_step = 0;
	if (!(log_step = ++log_step % 60))
	{
		double total_xstep = 0, total_ystep = 0;
		for (int i = 0; i < numberOfStars_; i++) 
		{
			total_xstep += abs(stars_[i].xstep_); 
			total_xstep += abs(stars_[i].ystep_);
		}

		cout << "avg speed = " <<  (sqrt(pow(total_xstep, 2) + pow(total_ystep, 2)) / numberOfStars_) << endl;
		cout << "star 1 speed = " << (sqrt(pow(stars_[0].xstep_, 2) + pow(stars_[0].ystep_, 2))) << endl;
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{
	for (int i = 0; i < numberOfStars_; i++) stars_[i].draw();
	gui_.draw();
}


void ofApp::numberOfStarsChanged(int & numberOfStars)
{
	static int previousValue = defaultNumberOfStars;
	for (int i = previousValue; i < numberOfStars; i++) stars_[i].setup();
	cout << "numberOfStarsChanged from " << previousValue << " to " << numberOfStars << endl;
	previousValue = numberOfStars;
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
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
