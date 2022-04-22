#pragma once

#include <memory>
#include <string>
#include <vector>

class Object;
class Player;
class iStrategy
{
public:
	iStrategy() = delete;
	iStrategy(Player* owner, char commandToActivate, std::string actionName);
	
	const char commandToActivate{ ' ' };
	const std::string actionName;
	Player* owner{ nullptr };

	virtual void execute(std::vector <std::unique_ptr<Object>>& objects) = 0;

};