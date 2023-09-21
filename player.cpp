#include "player.h"
#include <string>
#include <iostream>
#include <iomanip>
Player::Player(int pRank, string plName, string pfName, string pCountry, int pPoints) {
	rank = pRank;
	lName = plName;
	fName = pfName;
	country = pCountry;
	points = pPoints;
}
void Player::setRank(int playerRank) {
	rank = playerRank;
};
void Player::setlName(string playerLName) {
	lName = playerLName;
};
void Player::setFName(string playerFName) {
	fName = playerFName;
};
void Player::setCountry(string playerCountry) {
	country = playerCountry;
};
void Player::setPoints(int playerPoints) {
	points = playerPoints;
};
int Player::getPoints() const {
	return points;
}
int Player::getRank() const {
	return rank;
}
string Player::getLName() const {
	return lName;
}
string Player::getFName() const {
	return fName;
}
string Player::getCountry() const {
	return country;
}

void Player::display() const{
	cout << left << setw(4) << rank << left << setw(16) << fName << left << setw(16) << lName << left << setw(12) << country << left << setw(12) << points << endl;
}