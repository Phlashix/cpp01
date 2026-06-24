#include "Zombie.hpp"

int main()
{
	int nb = 3;

	Zombie *z = zombieHorde(nb, "zulu");
	for (int i = 0; i < nb; i++)
    	z[i].announce();
	delete [] z;
}