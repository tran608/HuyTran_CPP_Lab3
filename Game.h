/*******************************************************************
* FILE: Game.h
* PURPOSE: For lab 3 Submission
* AUTHORS: Tran Phuong Anh Nguyen - 040990608, Huy Vo - 040993746
* PROFESSOR: Paulo Sousa
* COURSE: CST8219_301 
*******************************************************************/
#include<iostream>
#include<string>

//Global constants
using namespace std;
const double NO_TIMEOUT(-1);


//Namespace
namespace cst8219 {
	class Game {

	private:
		//Declaring class fileds
		string name;
		int numPlayers;
		double timeout;

	public:
		//Declaring constructors, destructor and methods
		Game();
		Game(string);
		Game(string, int);
		Game(string, int, double);
		Game(Game*);
		~Game();
		void printGame();
		void setGame(string, int, double);


		//Getters and Setters
		string getName();
		int getNumPlayers();
		double getTimeout();
		void setName(string name);
		void setNumPlayers(int numPlayers);
		void setTimeout(double timeout);
	};
}













