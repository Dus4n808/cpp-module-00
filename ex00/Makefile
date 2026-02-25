# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dufama <dufama@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/24 15:45:57 by dufama            #+#    #+#              #
#    Updated: 2026/02/24 15:51:53 by dufama           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = megaphone
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98

SRC         = megaphone.cpp
OBJ_DIR     = obj/
OBJ         = $(SRC:%.cpp=$(OBJ_DIR)%.o)

G = \033[0;32m
R = \033[0;31m
Y = \033[0;33m
B = \033[0;34m
RES = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(Y)--- Finalizing Compilation ---$(RES)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(G)✅ $(NAME) created successfully!$(RES)"

$(OBJ_DIR)%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(B)🔨 Compiling: $< $(RES)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(Y)Cleaning objects...$(RES)"
	@rm -rf $(OBJ_DIR)
	@echo "$(G)Objects cleaned.$(RES)"

fclean: clean
	@echo "$(Y)Removing $(NAME)...$(RES)"
	@rm -f $(NAME)
	@echo "$(G)Cleanup complete.$(RES)"

re: fclean all

.PHONY: all clean fclean re
