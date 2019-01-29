#include <iostream>
#include <fstream>
#include <string>


using namespace std;

void numberoftweets() {

	int tweetnumber = 0; // the initial tweet number is set to 0 //
	string line;

	ifstream tweets("sampleTweets.csv"); //this opens the folder containing tweets //

	if (tweets.is_open()) // if the folder is open than this if statement will take effect //
	{

		while (!tweets.eof()) {  // whilst tweets is not at the end of the file //
			getline(tweets, line); // the program then gets the next line //
			cout << line << endl;
			tweetnumber++; // adds 1 to the counter //
		}


		cout << endl; // I decided to add two lines just to seperate the message from the tweets //
		cout << endl;
		cout << "there are " << tweetnumber << " tweets in this file" << endl; // outputs the amount of lines = tweets //


		tweets.close(); // this then closes the tweet file //

	}

	else {

		cout << "error reading file" << endl; // this error message appears If the file can't be read, to simply test this I just changed the name of the file //
	}
}



void counttweetsword(string searchWord) {



	int number = 0;   // the number of tweets with the word money are set at 0 //
	string line;
	
	string lowercase;
	string uppercase;

	if (searchWord == "money")
	{
		lowercase = "money";
		uppercase = "Money";
	}

	else {
		lowercase = "politics";
		uppercase = "Politics";
	}
	
	

	ifstream tweets("sampleTweets.csv");

	if (tweets.is_open()) // the folder containing the tweets is then opened //

	{
		while (!tweets.eof()) { // whilst tweets is not at the end of the file //
			getline(tweets, line); // the program checks the next line in the file//

			if (line.find(lowercase) != string::npos)  // if the program finds a line containing the word "politics" it will add 1 //
			{

				number++;

				cout << line << endl;

			}

			if (line.find(uppercase) != string::npos) //I wanted the program to also check for uppercase versions of money so simply copied and changed it to uppercase //

			{

				number++;

				cout << line << endl;

			}

		}
		cout << endl;
		cout << endl;
		cout << "there are " << number << " tweets that mention the word " <<  uppercase << "/" << lowercase << endl;

		

		tweets.close(); // the file then closes //
	}
	else {

		cout << "error reading file" << endl;

	}
}



void printtweetsword(string searchWord) {



	
	string line;
	string lowercase;
	string uppercase;

	if (searchWord == "paris")
	{
		lowercase = "paris";
		uppercase = "Paris";
	}

	else if (searchWord == "dreamworks")
	{
		lowercase = "dreamworks";
		uppercase = "DreamWorks";
	}

	else if (searchWord == "uber")
	{
		lowercase = "uber";  
		uppercase = "Uber";
		
	}


	ifstream tweets("sampleTweets.csv");

	if (tweets.is_open()) // the folder containing the tweets file is opened //

	{
		while (!tweets.eof()) { // whilst tweets is not at the end of the file //
			getline(tweets, line); // the program checks the next line in the file//

			if (line.find(lowercase) != string::npos)  // if the program finds a line containing the word "politics" it will add 1 //
			{

				cout << line << endl;

			}

			if (line.find(uppercase) != string::npos) //I wanted the program to also check for uppercase versions of money so simply copied and changed it to uppercase //

			{

				cout << line << endl;

			}

		}
		cout << endl;
		cout << endl;
		cout << "this is a list of tweets that mention the word " << uppercase << "/" << lowercase << endl;



		tweets.close(); // the file then closes //
	}
	else {

		cout << "error reading file" << endl;

	}
}



void firstday() {


	string line;

	ifstream tweets("sampleTweets.csv");

	if (tweets.is_open()) // the folder containing the tweets file is opened //

	{
		while (!tweets.eof()) { // whilst tweets is not at the end of the file //
			getline(tweets, line); // the program checks the next line in the file//

			if (line.find("/01/201") != string::npos)  //I wanted function to only count the 4th and 5th character of each line and if it equalled to 01 then it would then output but 
													  // couldn't figure it out so I just specified "/01/201" as i knew that would also work  //
												// this is my logic which didn't work --  	if (line[4] == "0") && (line[6] == "1")
			{
				
				cout << line << endl;

			}

			

		}
		cout << endl;
		cout << endl;
		cout << "Here is a list of tweets posted in January" << endl;



		tweets.close(); // the file then closes //
	}
	else {

		cout << "error reading file" << endl;

	}
}



void midnighttweets() {




	string line;
	string midnight[61] = { "00:00", "00:01", "00:02", "00:03", "00:04", "00:05", "00:06", "00:07", "00:08", "00:09", "00:10",
							"00:11", "00:12", "00:13", "00:14", "00:15", "00:16", "00:17", "00:18", "00:19", "00:20", "00:21",
							"00:22", "00:23", "00:24", "00:25", "00:26", "00:27", "00:28", "00:29", "00:30", "00:31", "00:32",
							"00:33", "00:34", "00:35", "00:36", "00:37", "00:38", "00:39", "00:40", "00:41", "00:42", "00:43",
							"00:44", "00:45", "00:46", "00:47", "00:48", "00:49", "00:50", "00:51", "00:52", "00:53", "00:54",
							"00:55", "00:56", "00:57", "00:58", "00:59", "01:00" };

	
	
	
	{
		ifstream tweets("sampleTweets.csv");

		if (tweets.is_open()) // the folder containing the tweets file is opened //

		{
			while (!tweets.eof()) { // whilst tweets is not at the end of the file //
				getline(tweets, line); // the program checks the next line in the file//

				for (int minute = 0; minute < 61; minute++)

				if (line.find(midnight[minute]) != string::npos)
				{

					cout << line << endl;

				}


			}
			cout << endl;
			cout << endl;
			cout << "Here is a list of tweets posted between the hours of midnight and 1am" << endl;



			tweets.close(); // the file then closes //
		}
		else {

			cout << "error reading file" << endl;
		}
	}
}



void santatweets() {




	string line;
	ifstream tweets("sampleTweets.csv");

	if (tweets.is_open()) // the folder containing the tweets file is opened //

	{
		while (!tweets.eof()) { // whilst tweets is not at the end of the file //
			getline(tweets, line); // the program checks the next line in the file//


				if (line.find("Santa") != string::npos)
					
				if (line.find("25/") != string::npos)
				{

					cout << line << endl;

				}



		}
		cout << endl;
		cout << endl;
		cout << "Here is a list of tweets that mention the name Santa on christmas day" << endl;



		tweets.close(); // the file then closes //
	}
	else {

		cout << "error reading file" << endl;
	}

}



void twentycharacters() {

	string line;
	
	
	ifstream tweets("sampleTweets.csv");


	if (tweets.is_open()) // the folder containing the tweets file is opened //
		
	{
		while (!tweets.eof()) { // whilst tweets is not at the end of the file //
			
			getline(tweets, line);
			
			if (line.size() == 40) 
			{
				// originally I was using line.length() and spent hours trying to get this working unsuccesfully//

				cout << line << endl;
			}

			
		}

		cout << endl;
		cout << endl;
		cout << "Here are all of the tweets containing exactly 20 characters" << endl;


		tweets.close(); // the file then closes //
	}
}





int main() {

	int userInput;
	char again;

	do {

		cout << "What would you like to do with this large file of tweets?" << endl;
		cout << "1. Count total number of Tweets" << endl;
		cout << "2. Count number of tweets that mention the word money" << endl;
		cout << "3. Count number of tweets that mention politics" << endl;
		cout << "4. Print to the screen any tweets mentioning the word Paris" << endl;
		cout << "5. Print to the screen any tweets mentioning the word DreamWorks" << endl;
		cout << "6. Print to the screen any tweets mentioning the word Uber" << endl;
		cout << "7. Print to the screen any tweets posted in January" << endl;
		cout << "8. Print to the screen any tweets posted between the hours of midnight and 1am" << endl;
		cout << "9. Print to the screen any tweets mentioning the word Santa on Christmas Day" << endl;
		cout << "10. Print to the screen tweets that are exactly 20 characters in length" << endl;




		cin >> userInput;
		// this switch statement controls the users input when deciding which out of the 10 tests they want to carry out, each input is a different function//
		switch (userInput) {

		case 1:
			numberoftweets();
			break;

		case 2:
			counttweetsword("money");
			break;

		case 3:
			counttweetsword("politics");
			break;

		case 4:
			printtweetsword("paris");
			break;

		case 5:
			printtweetsword("dreamworks");
			break;

		case 6:
			printtweetsword("uber");
			break;

		case 7:
			firstday();
			break;

		case 8:
			midnighttweets();
			break;

		case 9:
			santatweets();
			break;

		case 10:
			twentycharacters();
			break;

		}

		cout << "would you like to input another querie? type y or n" << endl;
		cin >> again;


		}
		while (again == 'y');
		if (again == 'n')

			cout << "thankyou for using TweetFinder" << endl;
	
	system("pause"); // system pause makes sure the console doesn't automatically close upon completing a task so that the user can view the results //
	return 0;

	}
		

	






