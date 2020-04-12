#pragma once
#include "Command.h"
#include <string>

class GameActor
{
public:
	GameActor();
	~GameActor();

	void Jump();
	void Fire();

	void PrintName();

private:
	string name = "test";
};