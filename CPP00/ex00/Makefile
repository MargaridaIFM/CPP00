# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/17 20:32:25 by mfrancis          #+#    #+#              #
#    Updated: 2025/02/18 19:36:28 by mfrancis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating Megaphone..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Megaphone Done!"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "Removing object files.."
	@rm -f $(OBJ)

fclean: clean
	@echo "Removing Megaphone.."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


