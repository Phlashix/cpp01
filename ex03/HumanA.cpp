
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _Name(name), _Wa(weapon)
{
}

void HumanA::attack()
{
	std::cout << _Name << " attacks with their " << _Wa.getType() << std::endl; 
}