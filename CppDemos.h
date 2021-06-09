

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
#pragma once
/*Including library and header files*/
#include <iostream>
#include<string>
#include<vector>
#include"Game.h"
using namespace std;
using namespace cst8219;

/*Function header*/
void funcMsg();
void lab1();
void lab2();
void printAddress(Game);
void changeGame(Game, string, int, double);
Game createOneGame();

vector<Game> createMultipleGames(int numberOfGames);

//global constant
#define usingNamespaces true


