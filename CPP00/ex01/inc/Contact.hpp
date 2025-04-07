/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 20:23:15 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/04 18:50:02 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
//#include "./PhoneBook.hpp"

class Contact
{
    private:
        std::string first_name;
        std::string lastName;
        std::string nickname;
        std::string phone_nbr;
        std::string darkest_secret;
        
    public:
        Contact();
        // Contact(/*args*/);
        // Contact(/*args copy*/);
        // Contact &operator=(/*args copy*/);
        ~Contact();
        
        void   SetContact();
        void   displayContact();
    
        //std:: string GetFirstName();
};      
#endif