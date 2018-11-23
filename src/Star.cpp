#include "Star.h"
#include "ofMain.h"
#include <random>

ofParameter<ofColor> Star::color_;
ofParameter<float> Star::lerpspeed_; 
ofParameter<float> Star::dev_;
ofParameter<float> Star::speed_;
ofParameter<float> Star::radius_step_;

Star::Star() 
{
	static int star_id = 0;
	star_id_ = star_id++;
}

Star::~Star()
{
}

void Star::draw()
{
	ofSetColor(star_color_);
	ofDrawCircle(xpos_, ypos_, radius_);
}

void Star::update()
{
	xpos_ += speed_ * xstep_;
	ypos_ += speed_ * ystep_;
	radius_ += (speed_ > 0 ? sqrt(speed_) : -sqrt(-speed_))* radius_step_;

	xstep_ *= 1.0f + 3.0f / 100.0f;
	ystep_ *= 1.0f + 3.0f / 100.0f;

	if (xpos_ < 0 || ypos_ < 0 || 
		xpos_ >  ofGetWidth() || ypos_ >  ofGetHeight())
	{
		setup();
	}
}

float Star::give_random(float min_val, float max_val, float dev) 
{
	static std::default_random_engine generator;
	std::normal_distribution<float> distribution(0.5, dev);

	float rnd = -1.0f;

	while (rnd < 0 || rnd > 1) rnd = distribution(generator);

	return(min_val + rnd*(max_val-min_val));
}

void Star::setup()
{
	init(give_random(0, ofGetWidth(), dev_), give_random(0, ofGetHeight(), dev_), give_random(0.1f, 3.0f, 0.5f));
}

void Star::init(float xpos, float ypos, float radius)
{
	static ofColor lastColor(0, 0, 0);

	lastColor.lerp(color_, lerpspeed_);
	star_color_ = lastColor;

	xpos_ = xpos;
	ypos_ = ypos;
	radius_ = radius;

	float xstep = xpos - (ofGetWidth() / 2);
	float ystep = ypos - (ofGetHeight() / 2);

	float step = sqrt(pow(xstep, 2) + pow(ystep, 2));
	xstep_ = xstep / step;
	ystep_ = ystep / step;

//	std::cout << "[star_id_ = " << star_id_ << "] init(float " << xpos << ", float " << ypos << ", float " << radius << ")" 
//		<< " xstep_ = " << xstep_ << ", ystep_ = " << ystep_
//		<< std::endl;
}