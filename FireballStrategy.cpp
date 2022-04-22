#include <random>
#include <iostream>
#include "FireballStrategy.h"
#include "Object.h"
#include "Player.h"

using namespace std;
FireballStrategy::FireballStrategy(Player* owner) :iStrategy(owner, 'i', "F(i)reball")
{
}
void FireballStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	if (owner->cast(spellCost))
	{
		system("CLS");
		std::cout << "Fireball crashes into the front line for damage!" << std::endl;
		for (int i = min(3, (int)objects.size() - 1); i > 0; i--)
		{
			objects[i]->defend(owner->attack());
		}
		system("PAUSE");
		system("CLS");
	}
}
