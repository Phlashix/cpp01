#include "replace.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./ex04 <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string s1 = av[2];
	if (s1.empty())
	{
		std::cerr << "S1 cant be NULL" << std::endl;
		return 1;
	}
	std::ifstream ifs(av[1]);
	if (ifs.is_open() == false)
	{
		std::cerr << "FILE cant be open" << std::endl;
		return 1;
	}
	std::string line;
	std::string content;
	while (std::getline(ifs, line))
	{
		content += line;
		content += '\n';
	}
	std::string fileName = std::string(av[1]) + ".replace";
	std::ofstream ofs(fileName.c_str());
	if (ofs.is_open() == false)
	{
		std::cerr << "OUTPUT FILE cant be open" << std::endl;
		return 1;
	}
	ofs << replaceAll(content, av[2], av[3]);
	return 0;
}