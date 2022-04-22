#pragma once

#include "iStrategy.h"

class FearStrategy: public iStrategy
{
public:
	FearStrategy(Player* owner);

	void execute(std::vector <std::unique_ptr<Object>>& objects) override;

};

