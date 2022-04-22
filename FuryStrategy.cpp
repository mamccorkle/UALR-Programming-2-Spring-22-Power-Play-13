#include <algorithm>
#include <random>
#include <iostream>
#include "FuryStrategy.h"
#include "Object.h"
#include "Player.h"
#include "Monster.h"

using namespace std;
FuryStrategy::FuryStrategy(Player* owner) :iStrategy(owner, 'u', "f(u)ry")
{

}
void FuryStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	std::cout << "Your fury blows through the front lines of the enemies!" << std::endl;
	for (int i = min(2, (int)objects.size() - 1); i > 0; i--)
	{
		objects[i]->defend(owner->attack());
		objects[i]->defend(owner->attack());
		objects[i]->scare();
	}
	cout << "The fury has left you weakend, your strength drops " << owner->getStrength() << " --> ";
	owner->weaken(1);
	cout << owner->getStrength() << endl;
	system("PAUSE");
	system("CLS");
}
