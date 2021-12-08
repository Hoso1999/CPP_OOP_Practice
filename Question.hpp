#ifndef QUESTION_HPP
#define QUESTION_HPP
#include <string>

enum class QuestNum
{
	Q_SQUARE,
	Q_TRIANGE,
	Q_CIRCLE
};

class Question
{
	std::string quest;
	public:
		Question(QuestNum, std::string*);
		~Question();

};


#endif // !QUESTION_HPP

