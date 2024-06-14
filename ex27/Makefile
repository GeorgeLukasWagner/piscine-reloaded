# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwagner <gwagner@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/06 12:08:41 by gwagner           #+#    #+#              #
#    Updated: 2024/06/06 18:20:17 by gwagner          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ./srcs/*.c
INCLUDES = ./includes/

all: $(NAME)

$(NAME):
		gcc -Wall -Werror -Wextra $(SRC) -I $(INCLUDES) -o $(NAME)


clean:
		rm -rf *.o

fclean:
		rm -rf $(NAME)
