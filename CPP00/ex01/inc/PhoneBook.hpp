/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:23:43 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/08 22:40:04 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include <limits>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int idx;
    
public:
    // Investigar / ver overload
    PhoneBook();
    //Phonebook(args) 
    //PhoneBook(PhoneBook const &copy); // default copy constructor
    //PhoneBook &operator=(PhoneBook const &copy); // default assignation operator 
    ~PhoneBook(); 

    void AddContact();
    void SearchContact();
    int DisplayList();    
};



#endif
