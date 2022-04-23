#pragma once

#include "Player.h"
#include "ObjectFactory.h"

class Player;
class PlayerFactory: public ObjectFactory
{
public:
	// Create player...
	std::unique_ptr<Object> create()
	{
		return std::make_unique<Player>();
	}
};