/*******************************************************************
* FILE:CppDemos.cpp
* PURPOSE: For lab 3 Submission
* AUTHORS: Tran Phuong Anh Nguyen - 040990608, Huy Vo - 040993746
* PROFESSOR: Paulo Sousa
* COURSE: CST8219_301
*******************************************************************/
#include "CppDemos.h"


/*
*..................................................................
* FUNCTION createOneGame()
* Return: aGame
* Parameters: Nothing (void)
* Purpose: create a game every time it is called
* Return type: Game
* Called function: createMultipleGames()
*..................................................................
*/
Game createOneGame() {

	string name;
	int numplayers;
	double timeout;
	cout << "Enter the name: ";
	getline(cin, name);
	while ( name.empty()) {

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

	Game aGame = Game(name, numplayers, timeout);
	aGame.printGame();
	return aGame;

}

/*
*..................................................................
* VECTOR createMultipleGames
* Return: gameList
* Parameters: int numberOfGames
* Purpose: to create multiple games and add the to the list (add at the tail of the list)
* Return type: vector<Game>
* Called function: lab2()
*..................................................................
*/
vector<Game> createMultipleGames(int numberOfGames) {
	int i = 0;
	vector<Game> gameList;
	for (i = 0; i < numberOfGames; i++) {
		gameList.push_back(createOneGame());
	}
	return gameList;
}

/*
*..................................................................
* FUNCTION changeGame
* Return: void
* Parameters: Game &g, string n = "[Noname]", int p = 1, double t = -1
* Purpose: change a game's fields to the new values or set to the default values
* Return type: void
* Called function: testReferences()
*..................................................................
*/
void changeGame(Game &g, string n = "[Noname]", int p = 1, double t = -1) {
	g.setGame(n, p, t);
}

/*
*..................................................................
* FUNCTION testReferences
* Return: void
* Parameters: void
* Purpose: testing
* Return type: void
* Called function: lab2()
*..................................................................
*/
void testReferences() {
	
}

/*
*..................................................................
* FUNCTION printAddress
* Return: void
* Parameters: Game g
* Purpose: printing the address of object g
* Return type: void
* Called function: none
*..................................................................
*/
void printAddress(Game g) {
	cout << "Game: " << g.getName() << " - Address: " << &g << endl;
}

void testOperators() {
	Game original;
	Game copy(original); // copy constructor by reference
	cout << "Original is: " << original << " copy is: " << copy << endl;
	//cout << "Increment original: " << original++ << endl;
	//cout << "Increment copy:" << ++copy << endl;
	//cout << "Decrement original:" << --original << endl;
	//cout << "Decrement copy:" << copy-- << endl;
	//// should be true:
	//cout << "Compare equality 1: " << (original == copy) << endl;
	////should be false:
	//cout << "Compare equality 2: " << (--original == ++copy) << endl;
	////should be true:
	//cout << "Compare inequality: " << (original != copy) << endl;
	//// This should make original = copy, and then return a Vehicle for output:
	//cout << "Assignment operator: " << (original = copy) << endl;
}

void lab3() {



	cout << "----------------------------------------------------------------" << endl;
	cout << "This is Lab 3!" << endl;
	/*Game game;
	Game game1("Game1");
	Game game2("Game2", 4);
	Game game3("Game3", 4, 2000);

	game.printGame(); game.creat
	cout << "game takes " << sizeof(game) << " bytes" << endl;
	game1.printGame();
	cout << "game1 takes " << sizeof(game1) << " bytes" << endl;
	game2.printGame();
	cout << "game2 takes " << sizeof(game2) << " bytes" << endl;
	game3.printGame();
	cout << "game3 takes " << sizeof(game3) << " bytes" << endl;*/

	/*testReferences();
	int numberOfGames;
	cout << "How many games do you want to create? ";
	while (!(cin >> numberOfGames) || numberOfGames < 0) {
		cout << "Please enter a valid number larger than 0: ";
		cin.clear();
		cin.ignore(256, '\n');
	};
	cin.ignore(256, '\n');*/

	testOperators();


	//vector<Game> gameList = createMultipleGames(numberOfGames);



	return;
}


/*
*..................................................................
* FUNCTION lab2
* Return: void
* Parameters: void
* Purpose: to run lab2's program
* Called function: main()
* Return type: void
*..................................................................
*/
void lab2() {

	

	cout << "----------------------------------------------------------------" << endl;
	cout << "This is Lab 2!" << endl;
	/*Game game;
	Game game1("Game1");
	Game game2("Game2", 4);
	Game game3("Game3", 4, 2000);

	game.printGame(); game.creat
	cout << "game takes " << sizeof(game) << " bytes" << endl;
	game1.printGame();
	cout << "game1 takes " << sizeof(game1) << " bytes" << endl;
	game2.printGame();
	cout << "game2 takes " << sizeof(game2) << " bytes" << endl;
	game3.printGame();
	cout << "game3 takes " << sizeof(game3) << " bytes" << endl;*/

	testReferences();
	int numberOfGames;
	cout << "How many games do you want to create? ";
	while (!(cin >> numberOfGames) || numberOfGames < 0) {
		cout << "Please enter a valid number larger than 0: ";
		cin.clear();
		cin.ignore(256, '\n');
	};
	cin.ignore(256, '\n');

	vector<Game> gameList = createMultipleGames(numberOfGames);
	cout << "End of method" << endl;



	return;
}

/*
*..................................................................
* FUNCTION lab1
* Return: void
* Parameters: void
* Purpose: to run lab1's program
* Called function: main()
* Return type: void
*..................................................................
*/
void lab1() {
	/*Case 1 is set to false*/
#if !usingNamespaces
#pragma message ("Not using namespaces")

/*
*..................................................................
* FUNCTION main (version 1 - using namespace)
* Return: Integer - success of operation
* Parameters: void
* Purpose: Main function
* Called function: funcMsg()
* Return type: int
* Author: Tran Phuong Anh Nguyen
*..................................................................
*/

	std::cout << "Hello world!" << std::endl;
	funcMsg();
	return;
	//return EXIT_SUCCESS;


	/*Case 2 is set to true*/
#elif usingNamespaces 
#pragma message ("Using namespaces")

	/*
	*..................................................................
	* FUNCTION main (version 2 - using namespace)
	* Return: Integer - success of operation
	* Parameters: int argc, char** argv
	* Purpose: Main function
	* Called function: funcMsg()
	* Return type: int
	* Author: Tran Phuong Anh Nguyen
	*..................................................................
	*/

	cout << "----------------------------------------------------------------" << endl;

	cout << "This is Lab 1" << endl;
	Game myGame;
	Game myGame2("Game1", 4);
	Game myGame3("Game2", 4, 2000);
	return;
#endif
}
/*
*..................................................................
* FUNCTION funcMsg
* Return: void
* Parameters: Nothing (void)
* Purpose: Prints messages
* Return type: void
* Called function: none
*..................................................................
*/
void funcMsg() {
	fprintf(stdout, "Lab 1 finished!\n");
	fprintf(stderr, "No errors found!\n");
}

/*
	*..................................................................
	* FUNCTION main 
	* Return: Integer - success of operation
	* Parameters: int argc, char** argv
	* Purpose: Main function
	* Called function: none
	* Return type: int
	*..................................................................
*/
int main(int argc, char** argv) {
	//lab3();
	lab1();
	lab2();
	system("pause");
	return EXIT_SUCCESS;
}