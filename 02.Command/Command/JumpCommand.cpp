#include "JumpCommand.h"

JumpCommand::JumpCommand()
{
}

JumpCommand::~JumpCommand()
{
	cout << "~JumpCommand" << endl;
}

void JumpCommand::execute(GameActor* actor)
{
	actor->Jump();
}