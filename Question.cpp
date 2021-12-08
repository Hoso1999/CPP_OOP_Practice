#include "Question.hpp"
#include <ctime>

static inline double Rand(double fMin, double fMax)
{
	double f = (double)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin);
}

static inline int Rand(int fMin, int fMax)
{
	int f = (int)rand() / RAND_MAX;
	return fMin + f * (fMax - fMin);
}

Question::Question(QuestNum qnum, std::string *questList)
{
	srand(time(NULL));

	std::string str("");
	if (qnum == QuestNum::Q_TRIANGE)
	{
		std::string a = std::to_string(Rand(1, 121));
		std::string b = std::to_string(Rand(1, 121));
		std::string c = std::to_string(Rand(1, 121));
		int num = Rand(0, 6);
		str += "Triangle sides is " + a + b + c + ".Calculate " +  questList[num]  + " of triangle.";
	}
	else if (qnum == QuestNum::Q_SQUARE)
	{
		std::string side = std::to_string(Rand(1, 121));
		int num = Rand(0, 6);
		str += "Square side is " + side + ".Calculate " + questList[num] + "of square.";
	}
	else if (qnum == QuestNum::Q_CIRCLE)
	{
		std::string r = std::to_string(Rand(1, 121));
		int num = Rand(0, 6);
		str += "Circle radius is " + r + ".Calculate " + questList[num] + "of circle.";
	}
}

Question::~Question()
{}