# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 20:32:25 by mfrancis          #+#    #+#              #
#    Updated: 2025/03/10 21:02:13 by mfrancis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME 		= PhoneBook

CC 			= c++

CFLAGS 		= -std=c++98 -Wall -Wextra -Werror

RM 			= 	rm -rf

INC_DIR		=	inc/

SRC_DIR		=	src/

OBJ_DIR		=	temp/

SRC 		= 	$(addprefix $(SRC_DIR),	main.cpp PhoneBook.cpp Contact.cpp)

OBJ 		= 	$(addprefix $(OBJ_DIR), $(notdir $(SRC:.cpp=.o)))

OBJ 		= $(SRC:.cpp=.o)


$(NAME): $(OBJ)
	@echo "Creating Phonebook..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Phonebook Done!"

$(OBJ_DIR):
				mkdir $(OBJ_DIR)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.cpp | $(OBJ_DIR)
				$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)


all: $(NAME)

clean:
	@echo "Removing object files.."
	@$(RM) $(OBJ)

fclean: clean
	@echo "Removing Phonebook.."
	@$(RM) $(NAME)

re: fclean all

val: $(NAME)
	make re 
	clear 
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./$(NAME)

.PHONY: all clean fclean re