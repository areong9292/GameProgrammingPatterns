#include "Command.h"
#include "JumpCommand.h"
#include "FireCommand.h"
#include "GameActor.h"

int main()
{
	// just point JumpCommand or FireCommand
	Command* buttonX_;

	JumpCommand* jumpCommand = new JumpCommand();
	FireCommand* fireCommand = new FireCommand();

	GameActor* actor = new GameActor();
	 
	buttonX_ = jumpCommand;
	buttonX_->execute(actor);

	// Change key
	cout << "Change key" << endl;

	buttonX_ = fireCommand;
	buttonX_->execute(actor);

	// Release
	if(actor != nullptr)
		delete actor;

	if(fireCommand != nullptr)
		delete fireCommand;

	if(jumpCommand != nullptr)
		delete jumpCommand;

	cout << "End Program";

	return 0;
}