#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "contact.hpp"
#include <iostream>

class PhoneBook
{
private:
    Contact contact[8];
public:
    void setinfo(int index);
    void getinfo (void); 
    void table_contact(int index);
    bool isNumber(const std::string& s);
};

#endif