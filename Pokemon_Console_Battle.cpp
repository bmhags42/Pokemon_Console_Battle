#include <iostream>
#include <windows.h>
#include <string>
#include "Pokemon.h"
using namespace std;

int main()
{
    //Create user and enemy Pokemon
    Pokemon user = Pokemon("Bulbasaur", "Bulbasaur", "Grass", "Poison", 45, 49, 49, 65, 65, 45);
    Pokemon enemy = Pokemon("Rattata", "Rattata", "Normal", "", 30, 56, 35, 25, 35, 72);

    string userInput = " ";

    while (userInput != "Choose") {
        //Draw Screen
        cout << string(120, '*') << endl;
        cout << endl;
        cout << string(23, ' ') << "Bulbasaur" << string(23, ' ') << "Charmander" << string(23, ' ') << "Squirtle" << string(24, ' ') << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << string(42, ' ') << "Your current choice is: " << user.getSpecies() << endl;
        cout << string(37, ' ') << "To choose your current pokemon type: Choose" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << string(120, '*') << endl;
        getline(std::cin, userInput);

        if (userInput == "Charmander") {
            user = Pokemon("Charmander", "Charmander", "Fire", " ", 39, 52, 43, 60, 50, 65);
            user.setMoveOne("Scratch", "Normal", "Physical", 40, 100);
            user.setMoveTwo("Ember", "Fire", "Special", 40, 100);
        }
        else if (userInput == "Squirtle") {
            user = Pokemon("Squirtle", "Squirtle", "Water", " ", 44, 48, 65, 50, 64, 43);
            user.setMoveOne("Tackle", "Normal", "Physical", 40, 100);
            user.setMoveTwo("Water Gun", "Water", "Special", 40, 100);
        }
        else if (userInput == "Bulbasaur") {
            user = Pokemon("Bulbasaur", "Bulbasaur", "Grass", "Poison", 45, 49, 49, 65, 65, 45);
            user.setMoveOne("Tackle", "Normal", "Physical", 40, 100);
            user.setMoveTwo("Vine Whip", "Grass", "Special", 40, 100);
        }   
    }

    userInput = " ";
    //Main Battle Loop
    while (userInput != "q")
    {
            //Draw Screen
            cout << string(120, '*') << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << enemy.getSpecies() << " " << enemy.getHp() << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << user.getSpecies() << " " << user.getHp() << endl;
            cout << endl;
            cout << endl;
            cout << "What will you do: " << user.moveOne.moveName << " | " << user.moveTwo.moveName << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << user.getNickName() << " used: " << userInput << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << string(120, '*') << endl;
            getline(std::cin, userInput);


            if (userInput == user.moveOne.moveName) {
                enemy.setHp(user.useMoveOne(enemy));
            }
            else if (userInput == user.moveTwo.moveName) {
                enemy.setHp(user.useMoveTwo(enemy));
            }

            user.setHp(enemy.useMoveOne(user));

        if (enemy.getHp() < 1) {
                userInput = "q";
        }
    }
    while (userInput != "Quit") {
        //Draw Screen
        cout << string(120, '*') << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "Congratulations! You and your " << user.getSpecies() << "have defeated the wild " << enemy.getSpecies() << endl;
        cout << "To close the game type Quit or exit the console." << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << string(120, '*') << endl;
        getline(std::cin, userInput);

    }

}