#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	this->_index = 0;
	this->_count = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void PhoneBook::createContact(void) {
	std::string input;

	std::cout << "First Name : ";
	std::getline(std::cin, input);
	_contacts[_index].setFirstName(input);

	std::cout << "Last Name : ";
	std::getline(std::cin, input);
	_contacts[_index].setLastName(input);

	std::cout << "Nick Name : ";
	std::getline(std::cin, input);
	_contacts[_index].setNickName(input);

	std::cout << "Phone Number : ";
	std::getline(std::cin, input);
	_contacts[_index].setPhoneNumber(input);

	std::cout << "Secret : ";
	std::getline(std::cin, input);
	_contacts[_index].setSecret(input);

	_index = (_index + 1) % 8;
	if (_count < 8)
		_count++;
}

void PhoneBook::searchContact(void) {
	std::cout << "===== CONTACTS =====" << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|";
	std::cout << std::setw(10) << "Number" << "|";
	std::cout << std::setw(10) << "Secret" << std::endl;

	for (int i = 0; i < _count; i++) {
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		std::cout << std::setw(10) << std::right << tronc(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << tronc(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << tronc(_contacts[i].getNickName()) << "|";
		std::cout << std::setw(10) << std::right << tronc(_contacts[i].getPhoneNumber()) << "|";
		std::cout << std::setw(10) << std::right << tronc(_contacts[i].getSecret()) << std::endl;
	}
}

std::string PhoneBook::tronc(std::string str) {
	if (str.length() > 10) {
		str = str.substr(0, 9) + '.';
	}
	return str;
}
