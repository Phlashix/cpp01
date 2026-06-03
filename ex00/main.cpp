#include "Zombie.hpp"

int main()
{
	randomChump("zala");
	Zombie *z = newZombie("zulu");
	z->announce();
	delete z;
}