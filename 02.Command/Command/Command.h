#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;
class GameActor;
class Command
{
public:
	Command();
	virtual ~Command();

	virtual void execute(GameActor* actor) = 0;
};