#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int main()
{
	PhoneBook journal;
	std::string input;

	while (true)
	{
		std::cout << "Choose a command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			journal.createContact();
		else if (input == "SEARCH")
			journal.searchContact();
		else if (input == "EXIT")
			break;
	}

}
