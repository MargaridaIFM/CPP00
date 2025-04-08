/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 21:51:07 by mfrancis          #+#    #+#             */
/*   Updated: 2025/04/08 22:10:21 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

int	main(int argc, char **argv)
{
	PhoneBook phonebook;
	std::string cmd;
	
	while (1)
	{
		std::cout << "Enter a command:  ADD, SEARCH, EXIT" << std::endl;

		std::getline(std::cin, cmd);

		if (std::cin.fail())
			exit(EXIT_FAILURE);
		if (cmd == "ADD")
			phonebook.AddContact();
		else if (cmd == "SEARCH")
			phonebook.SearchContact();
		else if (cmd == "EXIT")
			exit(EXIT_SUCCESS);
		else
			std::cout << "Invalid command! Try again.\n"; // << std::endl;
	}
	return (0);
}