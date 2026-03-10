#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor called On PhoneBook" << std::endl;
	this->_index = 0;
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor called On PhoneBook" << std::endl;
	return ;
}

void	PhoneBook::setIndex(void) {
	_index += 1;
}

void PhoneBook::createContact(void) {
	new Contact;
	setIndex();
	std::cout << "Create contact" << std::endl;
	std::cout << "First Name : ";
	std::string firstName;
	std::cin >> firstName;
	Contact test;
	test.addInfo(firstName);
	test.getName();
}
