#pragma once
#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <string>

class	Weapon{

	private:
		std::string _type;

	public:
		Weapon(std::string type);
		const std::string &getType(void) const;
		void	setType(std::string weap);
};


#endif