#ifndef I_STRATEGY_H
#define I_STRATEGY_H
#include <string>
#include <vector>
#include <memory>
class Player;
class Object;
class iStrategy
{
public:
	iStrategy() = delete;
	iStrategy(Player* owner, char commandToActivate, std::string actionName);

	virtual void execute(std::vector<std::unique_ptr<Object>>& objects) = 0;

	const char commandToActivate{ ' ' };
	const std::string actionName;
	Player* owner;


};
#endif // !I_STRATEGY_H
