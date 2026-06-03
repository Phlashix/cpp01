#include "Zombie.hpp"


Zombie *newZombie(std::string n)
{
	Zombie *z = new Zombie(n);
	return z;
}