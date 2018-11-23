#pragma once

<<<<<<< HEAD
#include "ofxGui.h"

=======
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
class Star
{
public:
	Star();
	~Star();

<<<<<<< HEAD
	void setup();
	void draw();
	void update();

	static ofParameter<ofColor> color_;
	static ofParameter<float> dev_;

private:

	void init(float xpos, float ypos, float radius);

=======
	void draw();
	void step();

	void initRandom();
	void init(float xpos, float ypos, float radius);

private:

>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
	int star_id_;

	int step_;
	float xpos_;
	float ypos_;
	float radius_;
	float xstep_;
	float ystep_;
	float radius_step_;

	float give_random(float min_val, float max_val);
};



