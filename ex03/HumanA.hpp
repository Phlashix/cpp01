#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanA{

	private:
		std::string _Name;
		Weapon &_Wa;

	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack();
};


#endif