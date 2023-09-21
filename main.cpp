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
		infile >> fName;
		infile >> lName;
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