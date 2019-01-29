#include "ofMain.h"
#include "ofApp.h"


int main( ){
	  //ofSetupOpenGL(1024,768,OF_WINDOW); originally I was using this but the user was able to resize the window which I didn't want to happen so found window settings attributes
	// and was able to set it to size without it being resized by the user//
	ofGLFWWindowSettings settings;
	settings.resizable = false;
	ofCreateWindow(settings);
	ofRunApp(new ofApp);

	
	

}
