#pragma once

#include "iStrategy.h"

class FireballStrategy: public iStrategy
{
public:
	FireballStrategy(Player* owner);

	void execute(std::vector <std::unique_ptr<Object>>& objects) override;

};

