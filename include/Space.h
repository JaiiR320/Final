#pragma once
#include <string>
using namespace std;

struct Player {
	int turn;
	int money;
	Property* properties[];
	Player(int turn) : turn(turn) {

	}
};

class Space {
	string name;
	int position;
	Space();
	virtual void action(Player p);
};

class Property : public Space {
	int cost;
	int numOfHouses;
	void action(Player p) {

	}
};

class Go : public Space {
	int income = 200;
	void action(Player p);
};
