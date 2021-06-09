/*******************************************************************
* FILE:CppDemos.h
* PURPOSE: For lab 3 Submission
* AUTHORS: Tran Phuong Anh Nguyen - 040990608, Huy Vo - 040993746
* PROFESSOR: Paulo Sousa
* COURSE: CST8219_301
*******************************************************************/
#pragma once
/*Including library and header files*/
#include <iostream>
#include<string>
#include<vector>
#include"Game.h"

using namespace std;

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


