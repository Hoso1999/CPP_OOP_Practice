#ifndef QUESTIONGENERATOR_HPP
#define QUESTIONGENERATOR_HPP

 #include <vector>
 #include <string>
 #include <ctime>
 #include "Triangle.hpp"
 #include "Circle.hpp"
 #include "Square.hpp"

enum class QuestNum
{
	Q_SQUARE,
	Q_TRIANGE,
	Q_CIRCLE
};

class QuestionGenerator
{
   std::vector<std::string> questList;
   std::vector<std::string> answersList;
   void generateQuestion();
    public:
        QuestionGenerator(int);
        ~QuestionGenerator();
        void print();
};





#endif