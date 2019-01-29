#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();

		void update();

		void draw();

		ofImage logo;
		ofImage TweetImageOne;
		ofImage SearchImage;

		ofTrueTypeFont twitterFont;
		string text;
		string wrapString(string text, int width);

		//this loads in all of the preworked assets such as images and fonts which can they be accessed in ofApp.cpp//

		
};
