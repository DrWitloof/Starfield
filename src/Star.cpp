#include "Star.h"
#include "ofMain.h"
#include "defines.h"
#include <random>

<<<<<<< HEAD
ofParameter<ofColor> Star::color_;
ofParameter<float> Star::dev_;

=======
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
Star::Star()
{
	static int star_id = 0;
	star_id_ = star_id++;
<<<<<<< HEAD
=======
//	initRandom();
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
}

Star::~Star()
{
}

void Star::draw()
{
<<<<<<< HEAD
	ofSetColor(color_);
	ofDrawCircle(xpos_, ypos_, radius_);
}

void Star::update()
=======
	ofDrawCircle(xpos_, ypos_, radius_);
}

void Star::step()
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
{
	xpos_ += xstep_;
	ypos_ += ystep_;
	radius_ += radius_step_;

	xstep_ *= 1.0f + 2 * radius_ / 100;
	ystep_ *= 1.0f + 2 * radius_ / 100;

	if (xpos_ < 0 || ypos_ < 0 || 
		xpos_ >  ofGetWidth() || ypos_ >  ofGetHeight())
	{
<<<<<<< HEAD
		setup();
=======
		initRandom();
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
	}
}

float Star::give_random(float min_val, float max_val) 
{
	static std::default_random_engine generator;
<<<<<<< HEAD
	std::normal_distribution<float> distribution(0.5, dev_);
=======
	static std::normal_distribution<float> distribution(0.5, 1);
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66

	float rnd = -1.0f;

	while (rnd < 0 || rnd > 1) rnd = distribution(generator);

	return(min_val + rnd*(max_val-min_val));
}

<<<<<<< HEAD
void Star::setup()
{
	init(give_random(0, ofGetWidth()), give_random(0, ofGetHeight()), give_random(0.1f, 3.0f));
=======
void Star::initRandom()
{
//	init(ofRandom(0, SCREEN_WIDTH), ofRandom(0, SCREEN_HEIGHT), ofRandom(0, MAX_START_RADIUS));
	

	init(give_random(0, ofGetWidth()), give_random(0, ofGetHeight()), give_random(0, 3.0f));
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
}

void Star::init(float xpos, float ypos, float radius)
{
	xpos_ = xpos;
	ypos_ = ypos;
	radius_ = radius;

	float xstep = xpos - (ofGetWidth() / 2);
	float ystep = ypos - (ofGetHeight() / 2);

	float step = sqrt(pow(xstep, 2) + pow(ystep, 2)) / STARSPEED;
	xstep_ = xstep / step;
	ystep_ = ystep / step;

	radius_step_ = 0.01f;

<<<<<<< HEAD
	std::cout << "[star_id_ = " << star_id_ << "] init(float " << xpos << ", float " << ypos << ", float " << radius << ")" 
		<< " xstep_ = " << xstep_ << ", ystep_ = " << ystep_
		<< std::endl;
=======
	//std::cout << "[star_id_ = " << star_id_ << "] init(float " << xpos << ", float " << ypos << ", float " << radius << ")" << std::endl;
>>>>>>> 11a670564e35367c1eef59f108ea748e06f9fa66
}