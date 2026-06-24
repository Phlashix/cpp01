#include "replace.hpp"

std::string replaceAll(const std::string &content, const std::string &s1, const std::string &s2)
{
	std::string result;
	size_t pos = 0;
	size_t	found = content.find(s1, pos);

	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		pos = (found + s1.size());
		result += s2;
	}
	result += content.substr(pos);
	return result;
}