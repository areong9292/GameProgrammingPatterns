#include "FireCommand.h"

FireCommand::FireCommand()
{
}

FireCommand::~FireCommand()
{
	cout << "~FireCommand" << endl;
}

void FireCommand::execute(GameActor* actor)
{
	actor->Fire();
}