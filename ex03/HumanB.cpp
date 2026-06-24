#include "HumanB.hpp"

HumanB::HumanB(std::string name): _Name(name)
{
}
void	HumanB::attack()
{
	std::cout << _Name << " attacks with their " << _Wa->getType() << std::endl; 
}

void	HumanB::setWeapon(Weapon &wea)
{
	_Wa = &wea;
}