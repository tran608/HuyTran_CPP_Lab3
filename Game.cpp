/*******************************************************************
* FILE: Game.cpp
* PURPOSE: For lab 3 Submission
* AUTHORS: Tran Phuong Anh Nguyen - 040990608, Huy Vo - 040993746
* PROFESSOR: Paulo Sousa
* COURSE: CST8219_301
*******************************************************************/
#include "Game.h"

//Constructors


Game::Game(string name, int nPlayers, double duration) {
	this->numPlayers = nPlayers;
	this->timeout = duration;
	this->name = name;
}

Game::Game(Game* g) {
	*this = *g;
};

//Destructors
Game::~Game() {
	cout << "In destructor " << this->name << endl;
}

/*
*..................................................................
* FUNCTION printGame
* Return: void
* Parameters: Nothing (void)
* Purpose: Prints messages
* Return type: void
* Called function: none
*..................................................................
*/
void Game::printGame() {
	cout << "Name: " << this->name << " - Numplayers: " << this->numPlayers << " - Timeout: " << this->timeout <<endl;
}

void Game::setGame(string n, int p, double t) {
	this->name = n;
	this->numPlayers = p;
	this->timeout = t;
}

//const Game& Game::operator=(const Game& game) {
//	this->setName(game.getName());
//	this->setDenominator(f.getDenominator());
//	return this;
//}

ostream&  operator <<(ostream& os, const Game& game) {
	os << "Name: " << game.getName() << " - Numplayers: " << game.getNumPlayers() << " - Timeout: " << game.getTimeout() << endl;
	return os;
}

istream& operator>>(istream& is, Game& game) {
	string name;
	int numplayers;
	double timeout;
	cout << "Enter the name: ";
	getline(cin, name);
	while (name.empty()) {

		cout << "Please enter a valid non-empty name: ";
		getline(cin, name);
	};
	cout << "Enter the number of players: ";
	while (!(cin >> numplayers) || !(numplayers >= 1 && numplayers <= 10)) {
		cout << "Please enter a valid number between 1 and 10: ";
		cin.clear();
		cin.ignore(256, '\n');
	};

	cout << "Enter the game duration: ";
	while (!(cin >> timeout) || timeout < 0) {
		cout << "Please enter a valid timeout larger than 0: ";
		cin.clear();
		cin.ignore(256, '\n');
	};
	cin.ignore(256, '\n');

	game.setName(name);
	game.setNumPlayers(numplayers);
	game.setTimeout(timeout);
	return is;

};

//Getters and Setters
string Game::getName() const { return this->name; };
int Game::getNumPlayers() const { return this->numPlayers; };
double Game::getTimeout() const { return this->timeout; };
void Game::setName(string name) { this->name = name; };
void Game::setNumPlayers(int numPlayers) { this->numPlayers = numPlayers; };
void Game::setTimeout(double timeout) { this->timeout = timeout; };

vector<Player> Game::createPlayers() {
	int i;
	for (i = 0; i < this->numPlayers; i++) {
		string tempName;
		cout << "Please enter the name of player " << i+1 << ": ";
		cin >> tempName;
		Player tempPlayer(tempName);
		this->playersList.push_back(tempPlayer);
	}
	return this->playersList;
}

void Game::listPlayers() {
	for (Player player : this->playersList) {
		player.printPlayer();
	}
}
