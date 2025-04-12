/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 20:34:17 by mfrancis          #+#    #+#             */
/*   Updated: 2025/03/11 14:21:37 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

std:: string print_UpperCase(char *argv)
{
    for(int i =0; argv[i]; i++)
    {
        argv[i] = toupper(argv[i]);
    }
    return(argv);
}

void print_msg(int argc, char **argv)
{
    for(int i = 1; i < argc; i++)
       std:: cout << print_UpperCase(argv[i]) << std:: endl;
}

int main(int argc, char **argv)
{
    if(argc != 1)
        print_msg(argc, argv);
    else
        std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
