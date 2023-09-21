#include "player.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main()
{
	vector <Player> players;
	ifstream infile;
	infile.open("womenSinglesSorted.txt");
	if (!infile.is_open()) {
		cout << "File open error!" << endl;
		return 1;
	}
	int rank, points;
	string lName, fName, country;
	while (!infile.eof()) {
		infile >> rank;
		infile >> lName;
		infile >> fName;
		infile >> country;
		if (country == "???") {
			country = "Unknown";
		}
		infile >> points;
		Player aPlayer(rank, lName, fName, country, points);
		aPlayer.display();
		players.push_back(aPlayer);
	}
	cout << players.size() << endl;
	string userInput;
	cout << "Who do you want to lookup by last name. Type n if you want to quit " << endl;
	cin >> userInput;
	while (userInput != "n") {
		int i = 0;
		while (i < players.size()) {
			char x = userInput[0];
			char f = players.at(i).getLName()[0];
			if (f > x) {
				i = 0;
				break;
			}
			if (userInput == players.at(i).getLName()) {
				players.at(i).display();	
			}
			i++;
		}
		cout << "Who do you want to lookup by last name. Type n if you want to quit " << endl;
		cin >> userInput;
	}
	return 0;
}

/*


if there are 2 players with the same last name, print the first one.


vector <player> players;
srting first,last,country;
int rank, points
while(      ) {
infile >> ... ;
player aPLayer;
players.push_back(aplayer);

*notes from in class*

*/