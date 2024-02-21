# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 16:30:27 by francfer          #+#    #+#              #
#    Updated: 2024/02/21 09:55:06 by francfer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra 
RM			= rm -f
AR			= ar rcs


FILES	=	ft_printf.c print_chars.c print_hex.c print_num.c \
ft_putchar_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c
			
OBJS = $(FILES:.c=.o)

all:		$(NAME)

%.o : %.c ft_printf.h
	@${CC} ${CFLAGS} -c -o $@ $<
	
$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

clean:
			@$(RM) -rf $(OBJS)
			@echo "ft_printf object files cleaned!"

fclean:		clean
			@$(RM) -f $(NAME)
			@echo "ft_printf executable files cleaned!"

re:			fclean all
			@echo "Cleaned and rebuilt everything for ft_printf!"

.PHONY:		all clean fclean re

	
