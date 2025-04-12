/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:23:15 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/08 13:41:51 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
//#include "./PhoneBook.hpp"

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNbr;
        std::string darkestSecret;
        
    public:
        Contact();
        ~Contact();
        
        void   SetContact();
        void   CheckContent(std::string& str);
        void   DisplayContact(int i);
        void   DisplayAllInfo();
        std::string GetFirstName();
        std::string FormatString(const std::string& str);
};      
#endif