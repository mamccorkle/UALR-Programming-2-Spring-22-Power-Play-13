#pragma once

#include "Monster.h"
#include "ObjectFactory.h"

class Monster;
class MonsterFactory: public ObjectFactory
{
public:
	// Create monsters...
	std::unique_ptr<Object> create()
	{
		return std::make_unique<Monster>();
	}
};