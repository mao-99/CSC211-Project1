#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
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
		cout << left << setw(4) << rank << left << setw(16) << fName << left << setw(16) << lName << left << setw(12) << country << left << setw(12) << points << endl;
		
	}

	return 0;
}