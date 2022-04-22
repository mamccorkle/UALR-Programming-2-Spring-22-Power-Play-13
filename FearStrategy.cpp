
#include <iostream>

#include "FearStrategy.h"
#include "Player.h"

FearStrategy::FearStrategy(Player* owner)
	:iStrategy(owner, '!', "(!)Fear")
{ }

// Fear Spell - 50% chance of causing fear. Affects all creatures. Reduces there chance to attack to 50% (3 SP)
void FearStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	owner->cast(3);

	for (int i{ std::min(3, (int)objects.size() - 1) }; i > 0; i--)
	{
		// 50% chance of scare:
		std::bernoulli_distribution ranFear(0.5);
		if (ranFear(Object::engine))
		{
			// Bonus for Ba2:
			// % chance it will scare the monster based on the number of monsters
			// The more monsters the less it scares them:
			std::bernoulli_distribution ranScare((1.0 - ((int)objects.size() - 1.0) / (int)objects.size()));
			if (ranScare(Object::engine))
				objects.at(i)->scare();
		}
		objects.at(i)->defend(owner->attack());
	}

	system("PAUSE");
	system("CLS");
}
