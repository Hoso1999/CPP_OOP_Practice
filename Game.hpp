#ifndef GAME_HPP
#define GAME_HPP

#include "Player.hpp"

class Game
{
	int playerTime;
	int questionCount;
	public:
		Game(int, int);
		~Game();
		void start();
		void end();
};



#endif
