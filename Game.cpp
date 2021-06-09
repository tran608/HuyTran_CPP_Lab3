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

//Getters and Setters
string Game::getName() { return this->name; };
int Game::getNumPlayers() { return this->numPlayers; };
double Game::getTimeout() { return this->timeout; };
void Game::setName(string name) { this->name = name; };
void Game::setNumPlayers(int numPlayers) { this->numPlayers = numPlayers; };
void Game::setTimeout(double timeout) { this->timeout = timeout; };
