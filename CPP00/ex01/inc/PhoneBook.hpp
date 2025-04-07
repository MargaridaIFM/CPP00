/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:23:43 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/04 18:49:02 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int idx;
    
public:
// Investigar / ver overload
    PhoneBook();
    //PhoneBook(PhoneBook const &copy); // default copy constructor
    //PhoneBook &operator=(PhoneBook const &copy); // default assignation operator 
    ~PhoneBook(); 

    void AddContact();
    void SearchContact();
    
    void DisplayList();
};



#endif
