#include "Zombie.hpp"


Zombie *zombieHorde(int nb, std::string n)
{
	Zombie *horde = new Zombie[nb];
	for (int i = 0; i < nb; i++)
		horde[i].setName(n);
	return horde; 
}