#include <string>
#include <iostream>
#include <random>
#include "BasicAttackStrategy.h"
#include "Object.h"
#include "Player.h"
#include "Monster.h"

using namespace std;
BasicAttackStrategy::BasicAttackStrategy(Player* owner) :iStrategy(owner, 'a', "(a)ttack")
{
}
void BasicAttackStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	int monsterNum{ 0 };
	if (objects.size() > 2)
	{
		cout << "Which Monster? (";
		for (unsigned int i = 1; i < objects.size(); i++)
		{
			cout << i;
			if (i < objects.size() - 1) cout << ", ";
		}
		cout << "): ";

		std::cin >> monsterNum;
	}

	if (monsterNum < 1)
	{
		monsterNum = 1;
	}
	else if (monsterNum >= objects.size())
	{
		monsterNum = (int)objects.size() - 1;
	}
	Object::nameOnly = true;
	system("CLS");
	cout << "**************FIGHT*****************" << endl;
	cout << *owner << " Attacks ";
	cout << *objects.at(monsterNum) << "!!\n";

	objects[monsterNum]->defend(owner->attack());
}
