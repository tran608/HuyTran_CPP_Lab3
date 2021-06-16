/*******************************************************************
* FILE: Game.cpp
* PURPOSE: For lab 3 Submission
* AUTHORS: Tran Phuong Anh Nguyen - 040990608, Huy Vo - 040993746
* PROFESSOR: Paulo Sousa
* COURSE: CST8219_301
*******************************************************************/
#include "Game.h"



//Constructor to initialize fields
Game::Game(string name, int nPlayers, double duration) {
	this->numPlayers = nPlayers;
	this->timeout = duration;
	this->name = name;
}

//Copy constructors
Game::Game(Game* g) 
	: Game(g->getName(), g->getNumPlayers(), g->getTimeout()){};

Game::Game(Game& g)
	: Game(g.getName(), g.getNumPlayers(), g.getTimeout()) {};


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

/*
*..................................................................
* FUNCTION setGame
* Return: void
* Parameters: string n, int p, double t
* Purpose: Set attributes based on the parameter list
* Return type: void
* Called function: none
*..................................................................
*/
void Game::setGame(string n, int p, double t) {
	this->name = n;
	this->numPlayers = p;
	this->timeout = t;
}

/*
*..................................................................
* FUNCTION operator<<
* Return: os
* Parameters: ostream& os, const Game& game
* Purpose: Printing a game
* Return type: ostream&
* Called function: none
*..................................................................
*/
ostream& CST8219::operator<<(ostream& os, const Game& game) {
	os << "Name: " << game.getName() << " - Numplayers: " << game.getNumPlayers() << " - Timeout: " << game.getTimeout() << endl;
	return os;
}

/*
*..................................................................
* FUNCTION operator>>
* Return: is
* Parameters: istream& is, Game& game
* Purpose: Getting input of a game
* Return type: istream&
* Called function: none
*..................................................................
*/
istream& CST8219::operator>>(istream& is, Game& game) {
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


/*
*..................................................................
* FUNCTION operator=
* Return: this
* Parameters: const Game&
* Purpose: Assign all attributes of 1 game to another game
* Return type: const Game&
* Called function: none
*..................................................................
*/
const Game& Game::operator=(const Game& game) {
	this->setName(game.getName());
	this->setNumPlayers(game.getNumPlayers());
	this->setTimeout(game.getTimeout());
	return this;
}

/*
*..................................................................
* FUNCTION operator==
* Return: isEqual
* Parameters: const Game& game
* Purpose: Checks if 2 games are equal
* Return type: bool
* Called function: none
*..................................................................
*/
bool Game::operator==(const Game& game) {
	bool isEqual = false;
	
	isEqual = (this->getName() == game.getName() &&
		this->getNumPlayers() == game.getNumPlayers() &&
		this->getTimeout() == game.getTimeout());
	
	return isEqual;
}

/*
*..................................................................
* FUNCTION operator!=
* Return: bool
* Parameters: const Game& game
* Purpose: Checks if 2 games are not equal
* Return type: bool
* Called function: none
*..................................................................
*/
bool Game::operator!=(const Game& game) {
	return !(operator == (game));
}

/*
*..................................................................
* FUNCTION operator++
* Return: Game
* Parameters: int n
* Purpose: Increment numPlayers
* Return type: Game
* Called function: none
*..................................................................
*/
Game Game::operator++(int n) {
	Game copy1(this);
	if (this->numPlayers < 10) {
		this->numPlayers++;
		return copy1;
	} 
	cout << "Incrementing here is not possible as it would make the numPlayers >= 10" << endl;
	return copy1;
	
}

/*
*..................................................................
* FUNCTION operator++
* Return: Game
* Parameters: none
* Purpose: Increment numPlayers
* Return type: Game
* Called function: none
*..................................................................
*/
Game Game::operator++() {
	if (this->numPlayers < 10) {
		this->numPlayers++;
		return this;
	}
	cout << "Incrementing here is not possible as it would make the numPlayers >= 10" << endl;
	return this;
	
}

/*
*..................................................................
* FUNCTION operator--
* Return: Game
* Parameters: int n
* Purpose: Decrement numPlayers
* Return type: Game
* Called function: none
*..................................................................
*/
Game Game::operator--(int n) {
	Game copy1(this);
	if (this->numPlayers > 1) {
		this->numPlayers--;
		return copy1;
	}
	cout << "Decrementing here is not possible as it would make the numPlayers < 1" << endl;
	return copy1;
	
}

/*
*..................................................................
* FUNCTION operator--
* Return: Game
* Parameters: none
* Purpose: Decrement numPlayers
* Return type: Game
* Called function: none
*..................................................................
*/
Game Game::operator--() {
	if (this->numPlayers > 1) {
		this->numPlayers--;
		return this;
	}
	cout << "Decrementing here is not possible as it would make the numPlayers < 1" << endl;
	return this;
}

//Getters and Setters
string Game::getName() const { return this->name; };
int Game::getNumPlayers() const { return this->numPlayers; };
double Game::getTimeout() const { return this->timeout; };
void Game::setName(string name) { this->name = name; };
void Game::setNumPlayers(int numPlayers) { this->numPlayers = numPlayers; };
void Game::setTimeout(double timeout) { this->timeout = timeout; };

/*
*..................................................................
* FUNCTION createPlayers
* Return: vector<Player>
* Parameters: none
* Purpose: Create a vector of players
* Return type: vector<Player>
* Called function: none
*..................................................................
*/
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

/*
*..................................................................
* FUNCTION listPlayers
* Return: void
* Parameters: none
* Purpose: Print the list of players
* Return type: void
* Called function: none
*..................................................................
*/
void Game::listPlayers() {
	for (Player player : this->playersList) {
		player.printPlayer();
	}
}
