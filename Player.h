#include <string>
#include <iostream>
using namespace std;

namespace CST8219 {
	class Player {
	private:
		string name; // Game player name
		int points; // Current points
		bool isCurrentPlayer; // Indicates if he/she is the current player

	public:
		Player(string name = "[Noname]", int points = 0, bool isCurrentPlayer = false);
		void printPlayer();
		Player setPlayer(string, int, bool);
		Player(const Player& copy);
		Player(Player* copy);
		int getPoints() const;
		void setPoints(int points);

		Player Player::operator++();
		Player Player::operator++(int points);

	};

}

using namespace CST8219;
