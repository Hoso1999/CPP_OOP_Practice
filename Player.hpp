#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player
{
	int correctAnswers;
	std::string questList[50];
	public:
		Player();
		~Player();
		void generateQuestion();

};




#endif