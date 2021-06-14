#include "Player.h"

Player::Player(string name, int points, bool isCurrentPlayer) {
	this->name = name;
	this->points = points;
	this->isCurrentPlayer = isCurrentPlayer;
}

void Player::printPlayer() {
	cout << "Name: " << this->name << " - Points: " << this->points << " - CurrentPlayer is : " << this->isCurrentPlayer << endl;

}

Player Player::setPlayer(string name, int points, bool isCurrentPlayer) {
	this->name = name;
	this->points = points;
	this->isCurrentPlayer = isCurrentPlayer;
	return *this;
}

int Player::getPoints() const { return this->points; };
void Player::setPoints(int points) { this->points = points; };

Player::Player(const Player& copy) {
	*this = copy;
}

//constructor
Player::Player(Player* copy) {
	*this = *copy;
}

bool Player::operator==(const Player& player) {
	bool isEqual = false;

	isEqual = (this->getPoints() == player.getPoints());
	return isEqual;
}

bool Player::operator!=(const Player& player) {
	return !(operator == (player));
}

Player Player::operator++(int n) {
		Player copy(this);
		this->setPoints(this->getPoints() + 1);
		return copy;

}

Player Player::operator++() {
		this->setPoints(this->getPoints() + 1);
		return this;

}

