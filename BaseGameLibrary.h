#pragma once

#include <memory>

#include "GameLibrary.h"
#include "PlayerFactory.h"
#include "MonsterFactory.h"

class BaseGameLibrary : public GameLibrary
{
public:
	BaseGameLibrary()
	{
		inventory["player"] = std::make_unique<PlayerFactory>();
		inventory["monster"] = std::make_unique<MonsterFactory>();
	}
};