# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucpardo <lucpardo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 16:18:00 by lucpardo          #+#    #+#              #
#    Updated: 2025/05/23 22:59:53 by lucpardo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = ft_printf.c \
	   tools/ft_printf_helpers.c \
	   tools/ft_printf_more_helpers.c

LIBFT_DIR = tools/libft
LIBFT = $(LIBFT_DIR)/libft.a
INC_DIRS = -I. -Itools/libft
OBJS = $(SRCS:.c=.o)
AR = ar rcs
RM = rm -f

all: $(NAME)

$(LIBFT):
	@$(MAKE) -C $(LIBFT_DIR)
	@echo "libft built!"

$(NAME): $(OBJS) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) built!"

%.o: %.c ft_printf.h tools/libft/libft.h
	@$(CC) $(CFLAGS) $(INC_DIRS) -c $< -o $@

clean:
	@$(RM) $(OBJS)
	@echo "ft_printf object files vacuumed!"
	@$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) cleansed"
	@$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
