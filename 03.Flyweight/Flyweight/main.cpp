#include <iostream>
#include "World.h"
using namespace std;

int main()
{
	World* world = new World();
	world->generateTerrain();
	world->printTerrain();

	delete world;

	return 0;
}