#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB{

	private:
		std::string _Name;
		Weapon *_Wa;

	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &wea);
		void	attack();
};


#endif