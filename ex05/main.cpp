#include "harl.hpp"
 
int	main(void)
{
	Harl		harl;
	std::string	levels[5] = { "DEBUG", "INFO", "WARNING", "ERROR", "STAGIAIRE" };
 
	for (int i = 0; i < 5; i++)
	{
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Level: " << levels[i] << std::endl;
		harl.complain(levels[i]);
	}
	std::cout << "----------------------------------------" << std::endl;
	return (0);
}