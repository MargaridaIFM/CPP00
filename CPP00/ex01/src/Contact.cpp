/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:46:56 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/08 22:27:09 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

Contact::Contact()
{
    //std::cout << "Contact Constructer Called" << std::endl;
}
 
Contact::~Contact()
{
    //std::cout << "Contact Destructor Called" << std::endl;
}

void Contact::SetContact()
{
    std::cout << "Enter the firt name: " << std::endl;
    std::getline(std::cin, firstName);
    CheckContent(firstName);
    std::cout << "Enter the last name: " << std::endl;
    std::getline(std::cin, lastName);
    CheckContent(lastName);
    std::cout << "Enter the nickname: " << std::endl;
    std::getline(std::cin, nickname);
    CheckContent(nickname);
    std::cout << "Enter the phone number: " << std::endl;
    std::getline(std::cin, phoneNbr);
    CheckContent(phoneNbr);
    std::cout << "Enter the darkest secret: " << std::endl;
    std::getline(std::cin, darkestSecret);
    CheckContent(darkestSecret);
}
void Contact::CheckContent(std::string& str)
{
    if(std::cin.eof())
    {
        exit(EXIT_FAILURE);
    }
    if(str.empty())
    {
        while(str.empty())
        {
            std::cout << "Empty field. Please enter again: ";
            std::getline(std::cin, str);
        }
    }
}
std::string Contact::FormatString(const std::string& str)
{
    if(str.length() > 10)
        return(str.substr(0,9) + '.');
    return(str);
}
void Contact::DisplayContact(int i)
{
    std::cout << std::setw(10) << std::right << i << "|";
    std::cout << std::setw(10) << std::right << FormatString(firstName) << "|";
    std::cout << std::setw(10) << std::right << FormatString(lastName) << "|";
    std::cout << std::setw(10) << std::right << FormatString(nickname) << "|";
    std::cout << std::endl;
}


std::string Contact::GetFirstName()
{
    return (firstName);
}

void Contact::DisplayAllInfo()
{
    std::cout << "2222";
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName  << std::endl;
    std::cout << "NickName: " << nickname << std::endl;
    std::cout << "Phone Number: " << phoneNbr << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}