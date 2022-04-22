#ifndef BASIC_ATTACK_STRATEGY_H
#define BASIC_ATTACK_STRATEGY_H
#include "iStrategy.h"
class Player;
class BasicAttackStrategy :public iStrategy
{
public:
	BasicAttackStrategy(Player* owner);
	void execute(std::vector<std::unique_ptr<Object>>& objects) override;

};
#endif // !BASIC_ATTACK_STRATEGY_H
