#include "GameActor.h"

GameActor::GameActor()
{
}

GameActor::~GameActor()
{
	cout << "~GameActor" << endl;
}

void GameActor::Jump()
{
	cout << "Jump" << endl;
}

void GameActor::Fire()
{
	cout << "Fire" << endl;
}

void GameActor::PrintName()
{
	cout << "ÀÌ¸§ : " << name << endl;
}
