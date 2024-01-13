# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/11 14:01:38 by yamajid           #+#    #+#              #
#    Updated: 2024/01/12 14:52:34 by yamajid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	FragTrap
Run		=	c++
FLAGS	=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f

SRCS 	=	ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp

otherS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(otherS)
	$(Run) $(FLAGS) -o $(NAME) $(otherS)

%.o:  %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(Run) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(otherS)
fclean: clean
	$(RM) $(NAME)

re: fclean all