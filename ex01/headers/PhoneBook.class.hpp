#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
	private:
		Contact _contacts[8];
		int		_index;
		int		_count;

	public:
		PhoneBook();
		~PhoneBook();

		void createContact(void);
		void searchContact(void);
		std::string tronc(std::string str);
};

#endif
