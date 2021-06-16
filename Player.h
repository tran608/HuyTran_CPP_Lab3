/*******************************************************************
* FILE: Game.h
* PURPOSE: For lab 3 Submission
* AUTHORS: Tran Phuong Anh Nguyen - 040990608, Huy Vo - 040993746
* PROFESSOR: Paulo Sousa
* COURSE: CST8219_301
*******************************************************************/

//Necessary Libraries
#include <string>
#include <iostream>

using namespace std;

//Namespace
namespace CST8219 {
	class Player {
	private:
		//Declaring class fileds
		string name; // Game player name
		int points; // Current points
		bool isCurrentPlayer; // Indicates if he/she is the current player

	public:

		//Declaring constructors, destructor and methods
		Player(string name = "[Noname]", int points = 0, bool isCurrentPlayer = false);
		void printPlayer();
		Player setPlayer(string, int, bool);
		Player(const Player& copy);
		Player(Player* copy);
		int getPoints() const;
		void setPoints(int points);

		//Defining operators
		bool Player::operator==(const Player& points);
		bool Player::operator!=(const Player& points);
		Player Player::operator++();
		Player Player::operator++(int points);

	};

}

using namespace CST8219;
