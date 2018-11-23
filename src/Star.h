#pragma once

#include "ofxGui.h"

class Star
{
public:
	Star();
	~Star();

	void setup();
	void draw();
	void update();

	static ofParameter<ofColor> color_;
	static ofParameter<float> lerpspeed_;
	static ofParameter<bool> random_colors_;
	static ofParameter<float> speed_;
	static ofParameter<float> radius_step_;
	static ofParameter<float> dev_;



// private:

	void init(float xpos, float ypos, float radius);

	int star_id_;

	int step_;
	float xpos_;
	float ypos_;
	float radius_;
	float xstep_;
	float ystep_;
	ofColor star_color_;

	float give_random(float min_val, float max_val, float dev);
};



