

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
* Contents: Game.h, Game.cpp CMakeLists.txt, CppDemos.cpp, CppDemos.h, Action4_Screenshots_Lab2, Variables_Table_Lab2
*..................................................................
*/
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













