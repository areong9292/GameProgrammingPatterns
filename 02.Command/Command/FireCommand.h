#pragma once
#include "Command.h"
#include "GameActor.h"

class FireCommand : public Command
{
public:
	FireCommand();
	virtual ~FireCommand();

	virtual void execute(GameActor* actor);
};