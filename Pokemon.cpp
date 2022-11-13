#include "Pokemon.h"

int Pokemon::useMoveOne(Pokemon target) {
    if (moveOne.category == "Physical") {
        int damage;
        float STAB = 1;

        if (moveOne.type == mainType or moveOne.type == secType) {
            STAB = 1.5;
        }

        damage = ((((((2 / 5) + 2) * moveOne.power * (attack / target.getDefense())) / 50) + 2) * STAB * 2);
        return (target.getHp() - damage);
    }

    else if (moveOne.category == "Special") {
        int damage;
        float STAB = 1;

        if (moveOne.type == mainType or moveOne.type == secType) {
            STAB = 1.5;
        }

        damage = ((((((2 / 5) + 2) * moveOne.power * (specialAttack / target.getSpecialDefense())) / 50) + 2) * STAB * 2);
        return (target.getHp() - damage);
    }
}

int Pokemon::useMoveTwo(Pokemon target) {
    if (moveTwo.category == "Physical") {
        int damage;
        float STAB = 1;

        if (moveTwo.type == mainType or moveTwo.type == secType) {
            STAB = 1.5;
        }

        damage = ((((((2 / 5) + 2) * moveTwo.power * (attack / target.getDefense())) / 50) + 2) * STAB * 2);
        return (target.getHp() - damage);
    }

    else if (moveTwo.category == "Special") {
        int damage;
        float STAB = 1;

        if (moveTwo.type == mainType or moveTwo.type == secType) {
            STAB = 1.5;
        }

        damage = ((((((2 / 5) + 2) * moveTwo.power * (specialAttack / target.getSpecialDefense())) / 50) + 2) * STAB * 2);
        return (target.getHp() - damage);
    }
}

string Pokemon::getSpecies() {
	return species;
}

string Pokemon::getNickName() {
	return nickName;
}

void Pokemon::setNickName(string input) {
	nickName = input;
}

string Pokemon::getMainType() {
	return mainType;
}

string Pokemon::getSecType() {
	return secType;
}

int Pokemon::getHp() {
	return hp;
}

void Pokemon::setHp(int newHp) {
	hp = newHp;
}

int Pokemon::getAttack() {
	return attack;
}

void Pokemon::setAttack(int newAttack) {
	attack = newAttack;
}

int Pokemon::getDefense() {
	return defense;
}

void Pokemon::setDefense(int newDefense) {
	defense = newDefense;
}

int Pokemon::getSpecialAttack() {
	return specialAttack;
}

void Pokemon::setSpecialAttack(int newSpecialAttack) {
	specialAttack = newSpecialAttack;
}

int Pokemon::getSpecialDefense() {
	return specialDefense;
}

void Pokemon::setSpecialDefense(int newSpecialDefense) {
	specialDefense = newSpecialDefense;
}

int Pokemon::getSpeed() {
	return speed;
}

void Pokemon::setSpeed(int newSpeed) {
	speed = newSpeed;
}

void Pokemon::setMoveOne(string newMoveName, string newType, string newCategory, int newPower, int newAccuracy) {
    moveOne.moveName = newMoveName;
    moveOne.type = newType;
    moveOne.category = newCategory;
    moveOne.power = newPower;
    moveOne.accuracy = newAccuracy;
}

void Pokemon::setMoveTwo(string newMoveName, string newType, string newCategory, int newPower, int newAccuracy) {
    moveTwo.moveName = newMoveName;
    moveTwo.type = newType;
    moveTwo.category = newCategory;
    moveTwo.power = newPower;
    moveTwo.accuracy = newAccuracy;
}