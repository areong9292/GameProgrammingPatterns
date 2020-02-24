#include "World.h"

#include <iostream>
using namespace std;

World::~World()
{
}

void World::generateTerrain()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i % 2 == 0)
				tiles[i][j] = &_hillTerrain;
			else
				tiles[i][j] = &_grassTerrain;
		}
	}

	for (int j = 0; j < 10; j++)
	{
		tiles[2][j] = &_riverTerrain;
	}
}

void World::printTerrain()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			// 물일 경우
			if (tiles[i][j]->isWater())
			{
				cout << "~" << " ";
			}
			else
			{
				cout << tiles[i][j]->getMovementCost() << " ";
			}
		}
		cout << endl;
	}
}