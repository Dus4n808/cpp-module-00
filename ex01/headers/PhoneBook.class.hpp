#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <string>
#include "Contact.class.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		int		_index;

	public:
		PhoneBook();
		~PhoneBook();
};

#endif
