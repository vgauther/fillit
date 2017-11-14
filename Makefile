# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vgauther <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/07 14:13:38 by vgauther          #+#    #+#              #
#    Updated: 2017/11/13 16:33:15 by vgauther         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfil.a

EXE = fillit

FLAGS = -Wall -Werror -Wextra

OBJ =

all: $(NAME)

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all

.PHONY : clean fclean all re
