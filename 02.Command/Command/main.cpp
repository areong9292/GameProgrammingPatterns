#include "Command.h"
#include "JumpCommand.h"
#include "FireCommand.h"
#include "GameActor.h"
#include "InputManager.h"

#include <stdio.h>
#include <conio.h>

int main()
{
	// ��ǲ �Ŵ��� ����
	InputManager* inputManager = new InputManager();

	// ��ǲ �Ŵ����� ���� ����
	GameActor* actor = new GameActor();
	inputManager->SetActor(actor);
	
	// Ű �Է� �׽�Ʈ
	int key = 0;
	while (1)
	{
		if (_kbhit())
		{
			// getch�� Ű���� �Է� �������� �� �� �ް� �ڿ��� 0�̴�
			key = _getch();
			if (key != 0)
			{
				// break�Է� �� ���� ����
				if (key == 27)
					break;

				// Ű �Է� �� ��ǲ �Ŵ������� ����
				inputManager->ControlKey(key);
			}
		}
	}

	// Release
	if (actor != nullptr)
	{
		delete actor;
		actor = nullptr;
	}
	
	if (inputManager != nullptr)
	{
		delete inputManager;
		inputManager = nullptr;
	}

	cout << "End Program";

	return 0;
}