#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string	_phoneNumber;
		std::string _secret;
	public:
		Contact();
		~Contact();
};

#endif
