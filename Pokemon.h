#include <string>
#include "Move.h"
using namespace std;

class Pokemon {
protected:
	string species;
	string nickName;
	string mainType;
	string secType;
	int hp;
	int attack;
	int defense;
	int specialAttack;
	int specialDefense;
	int speed;

public:
	Move moveOne;
	Move moveTwo;

	Pokemon (string inSpecies,
	string inNickName,
	string inMainType,
	string inSecType,
	int inHp,
	int inAttack,
	int inDefense,
	int inSpecialAttack,
	int inSpecialDefense,
	int inSpeed) {
		species = inSpecies;
		nickName = inNickName;
		mainType = inMainType;
		secType = inSecType;
		hp = inHp;
		attack = inAttack;
		defense = inDefense;
		specialAttack = inSpecialAttack;
		specialDefense = inSpecialDefense;
		speed = inSpeed;

		moveOne.moveName = "Tackle",
		moveOne.type = "Normal",
		moveOne.category = "Physical",
		moveOne.power = 40,
		moveOne.accuracy = 100,

		moveTwo.moveName = "Vine Whip",
		moveTwo.type = "Grass",
		moveTwo.category = "Physical",
		moveTwo.power = 45,
		moveTwo.accuracy = 100;
	}

	int useMoveOne(Pokemon target);
	int useMoveTwo(Pokemon target);

	string getSpecies();
	string getNickName();
	void setNickName(string input);
	string getMainType();
	string getSecType();

	int getHp();
	void setHp(int newHp);
	int getAttack();
	void setAttack(int newAttack);
	int getDefense();
	void setDefense(int newDefense);
	int getSpecialAttack();
	void setSpecialAttack(int newSpecialAttack);
	int getSpecialDefense();
	void setSpecialDefense(int newSpecialDefense);
	int getSpeed();
	void setSpeed(int newSpeed);

	void setMoveOne(string newMoveName, string newType, string newCategory, int newPower, int newAccuracy);
	void setMoveTwo(string newMoveName, string newType, string newCategory, int newPower, int newAccuracy);
};

