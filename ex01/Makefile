# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/26 13:04:34 by zwong             #+#    #+#              #
#    Updated: 2023/07/27 10:42:05 by zwong            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(SRCS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

clean : 
	rm $(OBJS)

fclean : clean 
	rm -rf $(NAME)

re : fclean all
