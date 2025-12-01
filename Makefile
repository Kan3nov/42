# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: klafi <kanan.lafi@learner.42.tech>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/28 14:24:57 by klafi             #+#    #+#              #
#    Updated: 2025/11/29 13:15:37 by klafi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
FLAGS = -Wall -Wextra -Werror

all : compile

compile : $(wildcard *.o)
	@echo "we have .o files and we compile them"
	cc $(FLAGS) $^.o -o run

$(wildcard *.o) : $(wildcard *.c)
	@echo "we have .o files and we compile them"
	cc $(FLAGS) -c $^ -o $@
