#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkes_secret;

public:
    int addcontact(void);
    void getinfo (void); 
    void ft_contact(int index);
     void write_data();
};

#endif