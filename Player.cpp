#include "Player.h"

//Constructor to initialize fields
Player::Player(string name, int points, bool isCurrentPlayer) {
	this->name = name;
	this->points = points;
	this->isCurrentPlayer = isCurrentPlayer;
}

/*
*..................................................................
* FUNCTION printPlayer
* Return: void
* Parameters: Nothing (void)
* Purpose: Prints messages
* Return type: void
* Called function: none
*..................................................................
*/
void Player::printPlayer() {
	cout << "Name: " << this->name << " - Points: " << this->points << " - CurrentPlayer is : " << this->isCurrentPlayer << endl;

}

/*
*..................................................................
* FUNCTION setPlayer
* Return: *this
* Parameters: string name, int points, bool isCurrentPlayer
* Purpose: set player's attributes based on the parameter list
* Return type: Player
* Called function: none
*..................................................................
*/
Player Player::setPlayer(string name, int points, bool isCurrentPlayer) {
	this->name = name;
	this->points = points;
	this->isCurrentPlayer = isCurrentPlayer;
	return *this;
}

//Getters and setters
int Player::getPoints() const { return this->points; };
void Player::setPoints(int points) { this->points = points; };


Player::Player(const Player& copy) {
	*this = copy;
}

Player::Player(Player* copy1) {
	*this = *copy1;
}

/*
*..................................................................
* FUNCTION operator==
* Return: isEqual
* Parameters: const Player& player
* Purpose: Checks if 2 players are equal
* Return type: bool
* Called function: none
*..................................................................
*/
bool Player::operator==(const Player& player) {
	bool isEqual = false;

	isEqual = (this->getPoints() == player.getPoints());
	return isEqual;
}

/*
*..................................................................
* FUNCTION operator!=
* Return: bool
* Parameters: const Player& player
* Purpose: Checks if 2 players are not equal
* Return type: bool
* Called function: none
*..................................................................
*/
bool Player::operator!=(const Player& player) {
	return !(operator == (player));
}

/*
*..................................................................
* FUNCTION operator++
* Return: Player
* Parameters: int n
* Purpose: Increment points 
* Return type: Player
* Called function: none
*..................................................................
*/
Player Player::operator++(int n) {
		Player copy1(this);
		this->setPoints(this->getPoints() + 1);
		return copy1;

}

/*
*..................................................................
* FUNCTION operator++
* Return: Player
* Parameters: none
* Purpose: Increment points
* Return type: Player
* Called function: none
*..................................................................
*/
Player Player::operator++() {
		this->setPoints(this->getPoints() + 1);
		return this;

}

