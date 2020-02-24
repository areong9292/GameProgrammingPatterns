#pragma once
class Terrain
{
public:
	Terrain();
	Terrain(int movementCost, bool isWater, char* texture) : _movementCost(movementCost), _isWater(isWater), _texture(texture)
	{

	}
	~Terrain();

	int getMovementCost() const { return _movementCost; }
	bool isWater() const { return _isWater; }
	char* getTexture() const { return _texture; }

private:
	int _movementCost;
	bool _isWater;

	// temp char*
	char* _texture;
};

