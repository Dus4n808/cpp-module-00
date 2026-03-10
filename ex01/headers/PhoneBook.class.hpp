#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.class.hpp"

class PhoneBook {
	private:
		Contact _contacts;
		int		_index;

	public:
		PhoneBook();
		~PhoneBook();

		void createContact(void);
		void setIndex(void);

};

#endif
