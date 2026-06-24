#pragma once
#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <iostream>
#include <string>

class	Zombie{

	private:
		std::string _name;

	public:
		Zombie(void);
		~Zombie(void);
		void	announce();
		void	setName(std::string name);
};

Zombie	*zombieHorde(int nb, std::string n);
Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif