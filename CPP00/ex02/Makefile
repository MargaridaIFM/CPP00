NAME = account

SRC = Account.cpp tests.cpp

OBJ_DIR = obj
OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I.
RM = rm -fr

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Creating Account Progam..."
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(RED)Removing object files..$(NC)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(RED)Removing Account..$(NC)"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re