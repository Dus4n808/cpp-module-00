#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>


int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string total_str = "";
	for (int i = 1; i < argc; i++)
		total_str += argv[i];
	for (size_t j = 0; j < total_str.size(); j++)
		total_str[j] = (char)std::toupper(total_str[j]);
	std::cout << total_str << std::endl;
}
