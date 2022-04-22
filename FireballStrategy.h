#ifndef FIREBALL_STRATEGY_H
#define FIREBALL_STRATEGY_H
#include "iStrategy.h"
class Player;

class FireballStrategy :public iStrategy
{
public:
	FireballStrategy(Player* owner);
	void execute(std::vector<std::unique_ptr<Object>>& objects) override;
	int spellCost{ 10 };

};
#endif // !FIREBALL_STRATEGY_H
