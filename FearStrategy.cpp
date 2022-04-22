#include <iostream>
#include <random>
#include "FearStrategy.h"
#include "Object.h"
#include "Monster.h"
#include "Player.h"

using namespace std;
FearStrategy::FearStrategy(Player* owner) :iStrategy(owner, 'f', "(f)ear")
{
}
void FearStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	Object::nameOnly = true;
	bernoulli_distribution becomesAfraid(.5);
	if (owner->cast(spellCost))
	{
		system("CLS");
		for (auto& object : objects)
		{
			if (object->getName() != Object::Type::player && becomesAfraid(Object::engine))
			{
				object->scare();
				std::cout << *object << " is afraid!!" << std::endl;
			}
			else
			{
				cout << *object << " shrugs off the spell!!" << endl;
			}
		}
		system("PAUSE");
		system("CLS");
	}

}
