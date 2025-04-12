/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:24:47 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/08 22:39:24 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook()
: idx(0)
{
    //std:: cout << "PhoneBook Constructer Called" << std:: endl;
}
PhoneBook::~PhoneBook()
{
    //std :: cout << "PhoneBook Destructor called" << std:: endl;
}
void PhoneBook::AddContact()
{
    if(idx > 7)
        idx = 0;
    contacts[idx].SetContact();
    idx++;
}

void PhoneBook::SearchContact()
{
    int index;
    int nbrContacts = DisplayList();
    if(nbrContacts == 0)
        return ;
    std::cout << "Enter the index of the Contact:" << std::endl;
    std::cin >> index;
    if(std::cin.eof())
        exit(EXIT_FAILURE);
    if(std::cin.fail() || index < 0 || index  + 1 > nbrContacts)
    {
        while(std::cin.fail() || index < 0 || index + 1 > nbrContacts)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid Index. Try again: ";
            std::cin >> index;    
        }
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "1111";

    contacts[index].DisplayAllInfo();  
}

int PhoneBook::DisplayList()
{
    std::cout << "Contact List:" << std::endl;
    std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME" << std::endl;
    std::cout << "----------|----------|----------|----------" << std::endl;
    
    int nbrContacts = 0;
    for(int i = 0; i < 8 ; i++)
    {
        if(!contacts[i].GetFirstName().empty())
        {
            contacts[i].DisplayContact(i);
            nbrContacts++;
        }
    }
    return (nbrContacts);
}
