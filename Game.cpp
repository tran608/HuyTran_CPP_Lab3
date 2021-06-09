/*
*..................................................................
* Name: Tran Phuong Anh Nguyen
* Student ID: 040990608
* Name: Huy Vo
* Student ID: 040993746
* Course: CST8219 – C++ Programming, Lab Section: 011
* Lab 2
* Professor: Paulo Sousa
* Due Date: June 5, 2021
* Date: May 22, 2021
* Contents: Game.h, Game.cpp CMakeLists.txt, CppDemos.cpp, CppDemos.h, Action4_Screenshots_Lab2, Variables_Table_Lab2.
*..................................................................
*/
#include "Game.h"
using namespace cst8219;

//Constructors
Game::Game() : Game("[Noname]") {}

Game::Game(string name) : Game(name,1) {}

Game::Game(string name, int nPlayers) {
	this->name = name;
	this->numPlayers = nPlayers;
	this->timeout = NO_TIMEOUT;
}

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

//Getters and Setters
string Game::getName() { return this->name; };
int Game::getNumPlayers() { return this->numPlayers; };
double Game::getTimeout() { return this->timeout; };
void Game::setName(string name) { this->name = name; };
void Game::setNumPlayers(int numPlayers) { this->numPlayers = numPlayers; };
void Game::setTimeout(double timeout) { this->timeout = timeout; };
