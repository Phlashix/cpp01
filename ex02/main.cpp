
#include <string>
#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *ptr = &s;
	std::string &ref = s;

	std::cout << "s = [" << &s << "]  || '" << s << "'\n";
	std::cout << "ptr = [" << ptr << "]  || '" << *ptr << "'\n";
	std::cout << "ref = [" << &ref << "]  || '" << ref << "'";
}