#include <string>
using namespace std;
class Player {
public:
	Player(int pRank, string plName, string pfName, string pCountry, int pPoints);
	void setRank(int playerRank);
	void setlName(string playerLName);
	void setFName(string playerFName);
	void setCountry(string playerCountry);
	void setPoints(int playerPoints);
	int getPoints() const;
	int getRank() const;
	string getLName() const;
	string getFName() const;
	string getCountry() const;
	void display() const;
private:
	int rank;
	string lName;
	string fName;
	string country;
	int points;
};