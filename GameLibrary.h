#pragma once

#include <map>
#include <string>
#include <memory>

class ObjectFactory;
class GameLibrary
{
public:
	std::map<std::string, std::unique_ptr<ObjectFactory>> inventory;
};