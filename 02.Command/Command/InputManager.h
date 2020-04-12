#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <iostream>

#include "Command.h"
#include "JumpCommand.h"
#include "FireCommand.h"
#include "GameActor.h"

using namespace std;
class InputManager
{
public:
	InputManager();
	~InputManager();

	void ControlKey(int key);
	void SetActor(GameActor* actor);


	// just point JumpCommand or FireCommand
	Command* buttonX_;

	JumpCommand* jumpCommand;
	FireCommand* fireCommand;

	GameActor* actor;

};