#include "QuestionGenerator.hpp"


static inline int Rand(int min, int max)
{
   return min + rand() % (max - min + 1);
}

static inline double Rand(double min, double max) 
{

    return min + ( max - min) * (rand() % 1000000L) / 1000000L;
}

QuestionGenerator::QuestionGenerator(int questNum)
{
    srand(time(NULL));
    for (int i = 0; i < questNum; ++i)
        this->generateQuestion();
}
QuestionGenerator::~QuestionGenerator()
{}


void QuestionGenerator::generateQuestion()
{
    int num = Rand(0, 3);
    if (num == (int)QuestNum::Q_CIRCLE)
    {
        int circleQuests = Rand(0, 3);
        std::vector<std::string> quests;
        quests.push_back("area");
        quests.push_back("diameter");
        quests.push_back("circumference");
        int radius = Rand(1.0, 121.0);
        this->questList.push_back("Circle radius is " + std::to_string(radius) + ".Calculate " + quests[circleQuests] + " of Circle");
        Circle cir(radius);
        Shape *c = &cir;
        if (quests[circleQuests] == "area")
            answersList.push_back(std::to_string(c->area()));
        else if (quests[circleQuests] == "diameter")
            answersList.push_back(std::to_string(cir.diameter()));
        else
            answersList.push_back(std::to_string(cir.circumference()));
        
    }
    else if (num == (int)QuestNum::Q_TRIANGE)
    {
        int triangleQuests = Rand(0, 4);
        int base = Rand(0, 3);
        std::vector<std::string> quests;
        quests.push_back("area");
        quests.push_back("perimeter");
        quests.push_back("outside circle radius");
        quests.push_back("inside circle radius");
        quests.push_back("height of base " + std::to_string(97 + base));
        int a = Rand(1.0, 121.0);
        int b = Rand(1.0, 121.0);
        int c = Rand(1.0, 121.0);
        while (a + b <= c || a + c <= b || b + c <= a)
        {
            a = Rand(1.0, 121.0);
            b = Rand(1.0, 121.0);
            c = Rand(1.0, 121.0);
        }
        this->questList.push_back("Triangle sides are " + std::to_string(a) + " " + std::to_string(b) + " " + std::to_string(c)  + ".Calculate " + quests[triangleQuests] + " of triangle");
        Triangle t1(a, b, c);
        Shape *t = &t1;
        if (quests[triangleQuests] == "area")
            this->answersList.push_back(std::to_string(t->area()));
        else if (quests[triangleQuests] == "perimeter")
            this->answersList.push_back(std::to_string(t1.perimeter()));
        else if (quests[triangleQuests] == "outside circle radius")
            this->answersList.push_back(std::to_string(t1.outsideRadius()));
        else if (quests[triangleQuests] == "inside circle radius")
            this->answersList.push_back(std::to_string(t1.insideRadius()));
        else
            this->answersList.push_back(std::to_string(t1.height((BaseTriangle)base)));
    }
    else
    {
        int SquareQuests = Rand(0, 4);
        int base = Rand(0, 3);
        std::vector<std::string> quests;
        quests.push_back("area");
        quests.push_back("perimeter");
        quests.push_back("outside circle radius");
        quests.push_back("inside circle radius");
        quests.push_back("diagonal");
        int side = Rand(1, 121);
        this->questList.push_back("Square side is " + std::to_string(side) + ".Calculate " + quests[SquareQuests] + " of square");
        Square s1(side);
        Shape *s = &s1;
        if (quests[SquareQuests] == "area")
            this->answersList.push_back(std::to_string(s->area()));
        else if (quests[SquareQuests] == "perimeter")
            this->answersList.push_back(std::to_string(s1.perimeter()));
        else if (quests[SquareQuests] == "outside circle radius")
            this->answersList.push_back(std::to_string(s1.outsideRadius()));
        else if (quests[SquareQuests] == "inside circle radius")
            this->answersList.push_back(std::to_string(s1.insideRadius()));
        else
            this->answersList.push_back(std::to_string(s1.diagonal()));
    }
}

void QuestionGenerator::print()
{
    std::cout << "Questions" << std::endl;
    for (int i = 0; i < questList.size(); ++i)
    {
        std::cout << "quest " << i + 1 << std::endl;
        std::cout << questList[i] << std::endl;
        std::cout << "answer " << i + 1 << std::endl;
        std::cout << answersList[i] << std::endl;
        std::cout << "###########################################" << std::endl;
    }
    
}