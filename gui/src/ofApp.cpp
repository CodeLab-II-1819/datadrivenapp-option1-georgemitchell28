#include "ofApp.h"


void ofApp::setup(){
	ofBackground(230, 236, 240); // this is a slightly off white colour as pure white meant the page blended horribly into the taskbar//

	logo.load("TweetFinderLogo.png");
	TweetImageOne.load("TweetImageOne.png"); // images are loaded to the code to be accessed later on //
	SearchImage.load("SearchImage.png");

	twitterFont.load("HelveticaNeueLight.ttf", 10, true, true); // this is the font i'm using which is as similar to the official twitter font that i could find//
	twitterFont.setLineHeight(17.0f);

	
	string sometext = "30/03/2015 14:14,bRT @THR: DreamWorks Animation Stock Rises as 'Home' Opening Exceeds Expectations http : //t.co/JbAS59yN7h"
		"                                                                                                                                                                   "
		"23/03/2015 06:25,b'#DreamWorksHOME soundtrack album is out now! Download on @iTunesMusic: http://t.co/PZACj9a85r http://t.co/9MEPo17NMj'"
		"                                                                                                                                      "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"                                                                                                                                       "
		"24/02/2015 15:35,b'My song \xe2\x80\x9cTowards The Sun\xe2\x80\x9d from the #DreamWorksHOME soundtrack is out now!! Download -----&gt; http://t.co/hsKdBrMiWD'"
		"                                                                                                                                       "
		"12/05/2016 12:46, b When you're a red carpet photographer....but you love Trolls. #DreamWorksTrolls https://t.co/j4XDxeTKsH"""
		"                                                                                                                                           "
		"21/07/2016 18:56, b'Selfie-fail. #ComicCon2016 #DreamWorksTrolls https://t.co/s805R8YHC8'";

	// I know it's horrible to code like this but I couldn't figure out how to create spaces between the text that I needed to wrap (the tweets) //  

	text = wrapString(sometext, 375);
	

	
}

void ofApp::update(){

}


void ofApp::draw(){
	ofSetColor(29, 161, 243); // SetColor is used before drawing an object to change it's colour //
	ofDrawRectangle(0, 0, 1024, 120);

	ofSetColor(255, 255, 255);
	ofDrawRectRounded(10, 10, 300, 100, 10);

	ofSetColor(255, 255, 255);
	ofDrawRectangle(600, 145, 400, 600);
	ofDrawRectangle(26, 145, 545, 600);

	logo.draw(30, 15 ,253, 90 );

	TweetImageOne.draw(610, 320, 220, 220);

	ofSetColor(0, 0, 0);
	twitterFont.drawString(text, 605, 200);
	
	ofSetColor(29, 161, 243);
	ofDrawRectangle(600, 145, 400, 30);
	ofDrawRectangle(26, 145, 545, 30);
	ofDrawRectangle(26, 580, 545, 165);

	ofSetColor(255, 255, 255);
	twitterFont.drawString("List of tweets mentioning the word 'DreamWorks'.", 605, 165);
	twitterFont.drawString("Variety of query input options.", 30, 165);
	twitterFont.drawString("Choose an option by pressing the number and then press enter to search.", 30, 600);
	twitterFont.drawString("There are 317 tweets mentioning the word money.", 30, 650);
	twitterFont.drawString("Alternatively you can search for specific keywords or phrases.", 30, 700);

	ofSetColor(241, 241, 241);
	ofDrawRectRounded(28, 630, 540, 50, 2);
	ofDrawRectRounded(30, 715, 200, 20, 3);


	ofSetColor(0, 0, 0);
	twitterFont.drawString("There are 317 tweets mentioning the word money.", 30, 650);

	ofSetColor(193, 193, 193);
	SearchImage.draw(34, 717, 15, 15);

	ofSetColor(209, 209, 209);
	twitterFont.drawString("Find Tweets", 80, 728);
	

	ofSetColor(230, 236, 240);
	ofDrawRectangle(605, 247, 370, 1);
	ofDrawRectangle(605, 554, 370, 1);
	ofDrawRectangle(605, 620, 370, 1);
	ofDrawRectangle(605, 688, 370, 1);
	ofDrawRectangle(605, 739, 370, 1);

	ofSetColor(241, 241, 241);
	ofDrawRectangle(982, 175, 19, 570);

	ofSetColor(193, 193, 193);
	ofDrawRectRounded(985, 180, 13, 40, 2);



	ofSetColor(0, 0, 0);
	twitterFont.drawString("1. Count total number of tweets.", 50, 200);
	twitterFont.drawString("2. Count number of tweets that mention the word money.", 50, 240);
	twitterFont.drawString("3. Count number of tweets that mention politics.", 50, 280);
	twitterFont.drawString("4. Find any tweets mentioning the word Paris.", 50, 320);
	twitterFont.drawString("5. Find any tweets mentioning the word DreamWorks.", 50, 360);
	twitterFont.drawString("6. Find any tweets mentioning the word Uber", 50, 400);
	twitterFont.drawString("7. Find any tweets posted in January.", 50, 440);
	twitterFont.drawString("8. Find any tweets posted between the hours of midnight and 1am.", 50, 480);
	twitterFont.drawString("9. Find any tweets mentioning the word Santa on Christmas Day", 50, 520);
	twitterFont.drawString("10. Find tweets that are exactly 20 characters in length.", 50, 560);
	



	
	
	
}

string ofApp::wrapString(string text, int width) {
	string typeWrapped = "";
	string tempString = "";
	vector <string> words = ofSplitString(text, " "); //create vector full of individual words in string passed in

	for (int i = 0; i < words.size(); i++) { //run through vector
		string wrd = words[i]; //get current word in vector

		// if we aren't on the first word, add a space
		if (i > 0) {
			tempString += " ";
		}
		tempString += wrd; //add current word to temp string

		int stringwidth = twitterFont.stringWidth(tempString); //set string width to length of line

		if (stringwidth >= width) {//check string with to add either space or new line before current word
			typeWrapped += "\n"; //if line is now longer than desired width add a new line
			tempString = wrd; // make sure we're including the extra word on the next line
		}
		else if (i > 0) {
			typeWrapped += " "; // if we aren't on the first word, add a space
		}
		typeWrapped += wrd; //add current word to string to be returned with new lines for wrapping
	}

	return typeWrapped;

}


