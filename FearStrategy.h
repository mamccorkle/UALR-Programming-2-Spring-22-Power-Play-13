#ifndef FEAR_STRATEGY_H
#define FEAR_STRATEGY_H
#include "iStrategy.h"
class Player;

class FearStrategy :public iStrategy
{
public:
	FearStrategy(Player* owner);
	void execute(std::vector<std::unique_ptr<Object>>& objects) override;
	int spellCost{ 3 };

};
#endif // !FEAR_STRATEGY_H
