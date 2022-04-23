#pragma once
#include <memory>

class Object;
class ObjectFactory
{
public:
	virtual std::unique_ptr<Object> create() = 0;
};