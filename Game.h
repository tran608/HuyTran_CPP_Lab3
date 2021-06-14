/*******************************************************************
* FILE: Game.h
* PURPOSE: For lab 3 Submission
* AUTHORS: Tran Phuong Anh Nguyen - 040990608, Huy Vo - 040993746
* PROFESSOR: Paulo Sousa
* COURSE: CST8219_301 
*******************************************************************/
#include<iostream>
#include<fstream>
#include<string>
#include <vector>

//Global constants
using namespace std;
const double NO_TIMEOUT(-1);
#include "Player.h"


//Namespace
namespace CST8219 {
	class Game {

	private:
		//Declaring class fileds
		string name;
		int numPlayers;
		double timeout;
		vector<Player> playersList;

	public:
		//Declaring constructors, destructor and methods
		
		Game(string = "[Noname]", int = 0, double = NO_TIMEOUT);
		Game(Game*);
		~Game();
		void printGame();
		void setGame(string, int, double);


		//Getters and Setters
		string getName() const;
		int getNumPlayers () const;
		double getTimeout() const;
		void setName(string name);
		void setNumPlayers(int numPlayers);
		void setTimeout(double timeout);
		vector<Player> createPlayers();
		void listPlayers();

		friend ostream& operator<<(ostream& os, const Game& game);
		friend istream& operator>>(istream& is, Game& game);
		
		const Game& Game::operator=(const Game& game);
		bool Game::operator==(const Game& game);
		bool Game::operator!=(const Game& game);
		Game Game::operator++();
		Game Game::operator++(int n);
		Game Game::operator--();
		Game Game::operator--(int n);
	};

}


using namespace CST8219;












