#include "Command.h"
#include "JumpCommand.h"
#include "FireCommand.h"
#include "GameActor.h"
#include "InputManager.h"

#include <stdio.h>
#include <conio.h>

int main()
{
	// 인풋 매니저 선언
	InputManager* inputManager = new InputManager();

	// 인풋 매니저에 액터 연결
	GameActor* actor = new GameActor();
	inputManager->SetActor(actor);
	
	// 키 입력 테스트
	int key = 0;
	while (1)
	{
		if (_kbhit())
		{
			// getch로 키보드 입력 받으려니 두 번 받고 뒤에가 0이다
			key = _getch();
			if (key != 0)
			{
				// break입력 시 루프 종료
				if (key == 27)
					break;

				// 키 입력 시 인풋 매니저에서 제어
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