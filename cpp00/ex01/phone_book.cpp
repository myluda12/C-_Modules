#include <iostream>
#include <string.h>
#include <iomanip>
#include "contact.hpp"
#include "phone_book.hpp"
#include <sstream>

int    Contact::addcontact(void)
{
    std::cout << "fist_name: ";
    if (!std::getline(std::cin,first_name))
        return(0);
    std::cout << "last_name: ";
    if (!std::getline(std::cin,last_name))
        return(0);
    std::cout << "Nickname :";
    if (!std::getline(std::cin,nickname))
        return(0);
    std::cout << "phone_number :";
    if (!std::getline(std::cin,phone_number))
        return(0);
    std::cout << "darkest_secret : ";
    if (!std::getline(std::cin,darkes_secret))
        return (0);
    return (1);
}

void    Contact::write_data(void)
{
    std::cout << "Fist_name: ";
    std::cout << first_name << std::endl;
    std::cout << "Last_name: ";
    std::cout << last_name << std::endl;
    std::cout << "nickname: ";
    std::cout << nickname << std::endl;
    std::cout << "Phone_number: ";
    std::cout << phone_number << std::endl;
    std::cout << "Darkest_Secret : ";
    std::cout << darkes_secret << std::endl;
   
}

void    Contact::ft_contact(int index)
{
    std::string str;
    std::cout << std::setw(10) << index;
    std::cout << "|";
    str = first_name;
    if (str.length() > 10)
    {
        str.resize(10);
        str.back() = '.';
    }
    std::cout << std::setw(10) << str;
    std::cout << "|";
    str = last_name;
    if (str.length() > 10)
    {
        str.resize(10);
        str.back() = '.';
    }
    std::cout << std::setw(10) << str;
    std::cout << "|";
    str = nickname;
    if (str.length() > 10)
    {
        str.resize(10);
        str.back() = '.';
    }
    std::cout << std::setw(10) << str << std::endl;
}

bool PhoneBook::isNumber(const std::string& s)
{
    for (size_t i = 0 ; i < s.size(); i++) {
        if (std::isdigit(s[i]) == 0) 
            return true;
    }
    return false;
 }

void    PhoneBook::table_contact(int index)
{
    std::string p;
    std::stringstream fahd;
    int working_indice;
    std::cout << std::setw(10) << "index";
    std::cout << std::setw(10) << "|first name";
    std::cout << std::setw(10) <<  "|last name";
    std::cout << std::setw(10) << "|nickname" << std::endl;
    for(int i = 0; i < index; i++)
    {
        contact[i].ft_contact(i);
    }
    std::cout << "Please enter your index : ";
    std::getline(std::cin, p);
    fahd << p;
    fahd >> working_indice;

    if ( (isNumber(p) ? 1 : 0) || (working_indice >= index || working_indice < 0 || index == 0 ))
    {
        std::cout << "No information please try again" << std::endl;
            return ;
    }
    else
    {
        contact[working_indice].write_data();
    }
}
void    PhoneBook::setinfo(int index)
{
    contact[index].addcontact();
}

int main()
{
    PhoneBook phonebook;
    //Contact set;
    std::string input;
    int count = 0;
    int i = 0;
    int flag = 0;
    while (1)
    {
        std::cout << "PLEASE ENTER ADD | SEARCH | EXIT" << std::endl;
        std::getline(std::cin, input);
        if (input == "EXIT" || !std::cin)
            exit(0);
        else if (input == "ADD")
        {
            phonebook.setinfo(i);
            i++;
            if (!flag)
             count++;
            if (i == 8)
            {
                i = i % 8;
                count = 8;
                flag = 1;
            }
        }
        else if (input == "SEARCH")
        {
            phonebook.table_contact(count);
        }
        //std::cout << i << std::endl;
    }
    return 0;
}
