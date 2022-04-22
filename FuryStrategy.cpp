
#include <iostream>

#include "FuryStrategy.h"
#include "Player.h"

FuryStrategy::FuryStrategy(Player* owner)
	:iStrategy(owner, 'f', "(f)ury")
{ }

void FuryStrategy::execute(std::vector<std::unique_ptr<Object>>& objects)
{
	std::cout << "Your fury blows through the front lines of the enemies!" << std::endl;

	for (int i{ std::min(2, (int)objects.size() - 1) }; i > 0; i--)
	{
		objects.at(i)->defend(owner->attack());
		objects.at(i)->defend(owner->attack());
		// Bonus for Ba2:
		// % chance it will scare the monster based on the number of monsters
		// The more monsters the less it scares them:
		std::bernoulli_distribution ranScare((1.0 - ((int)objects.size() - 1.0) / (int)objects.size()));
		if (ranScare(Object::engine))
			objects.at(i)->scare();
		//objects.at(i)->scare();
	}
	std::cout << "The fury has left you weakend, your strength drops " << owner->getStrength() << " --> ";
	owner->weaken(1);
	std::cout << owner->getStrength() << std::endl;
	system("PAUSE");
	system("CLS");
}
