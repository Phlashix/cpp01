#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

void Zombie::setName(std::string name)
{
	Zombie::_name = name;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << _name << ": is dead." << std::endl; 
}