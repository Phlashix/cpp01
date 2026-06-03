#include "Zombie.hpp"

Zombie::Zombie(std::string n)
{
	_name = n;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << _name << ": is dead." << std::endl; 
}