#pragma once
#include "Terrain.h"

class World
{
public:

	World()
		:_grassTerrain(1,false, nullptr), 
		_hillTerrain(3, false, nullptr),
		_riverTerrain(2, true, nullptr)
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				tiles[i][j] = new Terrain;
			}
		}
	}
	~World();

	void generateTerrain();
	void printTerrain();

private:
	Terrain* tiles[10][10];

	Terrain _grassTerrain;
	Terrain _hillTerrain;
	Terrain _riverTerrain;

};

