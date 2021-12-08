#include "Question.hpp"
#include <ctime>



static inline int Rand(int Min, int Max)
{
	int n = (int)rand() / RAND_MAX;
	return Min + n * (Max - Min);
}

Question::Question(std::vector<std::string> questList)
{
	srand(time(NULL));

	int questNum = Rand(0, questList.size());
	this->quest = questList[questNum];
}

Question::~Question()
{}