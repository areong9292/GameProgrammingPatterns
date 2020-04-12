#include "InputManager.h"

InputManager::InputManager()
{
	jumpCommand = new JumpCommand();
	fireCommand = new FireCommand();

	buttonX_ = jumpCommand;
}

InputManager::~InputManager()
{
	// Release
	
	if (fireCommand != nullptr)
	{
		delete fireCommand;
		fireCommand = nullptr;
	}

	if (jumpCommand != nullptr)
	{
		delete jumpCommand;
		jumpCommand = nullptr;
	}
	
	cout << "~InputManager" << endl;
}

void InputManager::ControlKey(int key)
{
	//87, 119 W, w
	//65, 97 A,a
	//83, 115 S, s
	//68, 100 D, d
	switch (key)
	{
	case 87:
	case 119:

		buttonX_->execute(actor);
		// cout << "press w" << endl;
		break;
	case 65:
	case 97:
		cout << "press a" << endl;
		break;
	case 83:
	case 115:
		cout << "press s" << endl;
		break;
	case 68:
	case 100:
		cout << "press d" << endl;
		break;

	// 엔터
	case 13:
		buttonX_ = jumpCommand;
		break;

	// 쉬프트
	case 9:
		buttonX_ = fireCommand;
		break;

	default:
		cout << "입력 키 : " << key << endl;
		break;
	}
	/*
	buttonX_ = jumpCommand;
	buttonX_->execute(actor);

	// Change key
	cout << "Change key" << endl;

	buttonX_ = fireCommand;
	buttonX_->execute(actor);*/
}

void InputManager::SetActor(GameActor * actor)
{
	this->actor = actor;
	this->actor->PrintName();
}