#ifndef HEAL_STRATEGY_H
#define HEAL_STRATEGY_H
#include "iStrategy.h"
class Player;
class HealStrategy :public iStrategy
{
public:
	HealStrategy(Player* owner);
	void execute(std::vector<std::unique_ptr<Object>>& objects) override;

	int spellCost{ 2 };

};
#endif // !HEAL_STRATEGY_H
