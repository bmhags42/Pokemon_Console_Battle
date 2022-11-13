#include <string>
#include "Pokemon.h"
using namespace std;

class Bulbasaur : public Pokemon, Move {
public:
	Bulbasaur() {
		species = "Bulbasaur",
			nickName = "Bulbasaur",
			mainType = "Grass",
			secType = "Poison",
			hp = 45,
			attack = 49,
			defense = 49,
			specialAttack = 65,
			specialDefense = 65,
			speed = 45,

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
};