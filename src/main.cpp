#include "ofMain.h"
#include "ofApp.h"
#include "defines.h"

//========================================================================
int main( ){
<<<<<<< HEAD
	ofSetupOpenGL(SCREEN_WIDTH, SCREEN_HEIGHT, OF_WINDOW);			// <-------- setup the GL context
=======
	ofSetupOpenGL(SCREEN_WIDTH, SCREEN_HEIGHT, OF_FULLSCREEN);			// <-------- setup the GL context
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
