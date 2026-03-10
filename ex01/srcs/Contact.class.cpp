#include "Contact.class.hpp"

Contact::Contact(void) {
	std::cout << "Constuctor called On Contact" << std::endl;
}

Contact::~Contact(void) {
	std::cout << "Destructor called on Contact" << std::endl;
}

void Contact::addInfo(std::string firstName) {
	_firstName = firstName;
}

void Contact::getName(void) {
	std::cout << _firstName << std::endl;
}
