NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O2
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiling $<..."

clean:
	@rm -f $(OBJ)
	@echo "Object file cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Executable cleaned."

re: fclean all

.PHONY: all clean fclean re