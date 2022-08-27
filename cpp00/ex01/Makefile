CC = g++ -Wall -Wextra -Werror -g -o phonebook

SRC =  phone_book.cpp

NAME = phonebook

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC)

clean:
	rm -f $(NAME) 

fclean: clean	
	rm -f $(NAME) 

re : fclean all