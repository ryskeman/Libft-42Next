# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fernfern <fernfern@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 14:20:10 by fernfern          #+#    #+#              #
#    Updated: 2026/09/24 15:15:22 by fernfern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# FILE NAME
NAME = libft.a

# COMPILATOR
CC = cc

# COMPILATION FLAGS
CFLAGS = -Wall -Wextra -Werror


# ARCHIVER
AR = ar rcs

# INCLUDES
INCLUDES = libft.h

# SOURCES FILES
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c

# OBJECTS LIST CREATOR
OBJS = $(SRCS:.c=.o)

# LIBRARY RULE CREATOR
$(NAME): $(OBJS)
		$(AR) $@ $^

# MAIN RULE: LIBFT.A CREATOR
all: $(NAME)

# CREATOR OBJECTS RULE
%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

# CLEAN RULE: DELETE OBJECT FILES
clean:
	rm -f $(OBJS)

# FCLEAN RULE: DELETE OBJECTS AND LIBRARY
fclean: clean
	rm -f $(NAME)

# RE RULE: RECOMPILES ALL
re: fclean all

# PHONY TARGETS
.PHONY: all clean fclean re