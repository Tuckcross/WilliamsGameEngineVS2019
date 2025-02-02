#pragma once

#include "Engine/GameEngine.h"

class Laser : public GameObject
{
public:
	// Creates our Laser.
	Laser(sf::Vector2f pos);
	
	// Functions overridden from GameObject:
	void draw();
	void updates(sf::Time& elapsed);
private:
	sf::Sprite sprite_;

};
typedef std::shared_ptr<Laser> LaserPtr;
