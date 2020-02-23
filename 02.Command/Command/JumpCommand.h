#pragma once
#include "Command.h"
#include "GameActor.h"

class JumpCommand :	public Command
{
public:
	JumpCommand();
	virtual ~JumpCommand();

	virtual void execute(GameActor* actor);
};