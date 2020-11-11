# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obelouch <obelouch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/11 04:16:29 by obelouch          #+#    #+#              #
#    Updated: 2020/11/11 04:37:14 by obelouch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Sources files
COLLEEN_SRC = Colleen.c
GRACE_SRC = Grace.c
SULLY_SRC = Sully.c

# Executables
COLLEEN = Colleen
GRACE = Grace
SULLY = Sully

# Objects Files
OBJS_O = Sully*.o Grace.o Colleen.o

# Compiler cmd
CC = gcc -Wall -Wextra -Werror

all: colleen grace sully

#### Colleen ##############################
colleen: $(COLLEEN)
	@$(CC) -o $(COLLEEN) $(COLLEEN_SRC)

$(COLLEEN): $(COLLEEN_SRC)
	@echo 'Create $@'
	@$(CC) -o $@ -c $<

#### Grace   ##############################
grace: $(GRACE)
	@$(CC) -o $(GRACE) $(GRACE_SRC)

$(GRACE): $(GRACE_SRC)
	@echo 'Create $@'
	@$(CC) -o $@ -c $<

#### Sully   ##############################
sully: $(SULLY)
	@$(CC) -o $(SULLY) $(SULLY_SRC)

$(SULLY): $(SULLY_SRC)
	@echo 'Create $@'
	@$(CC) -o $@ -c $<

############################################

clean:
	@echo 'Clean the objects files'
	@rm -rf $(OBJS_O)

fclean: clean
	@echo 'Delete the executables'
	@rm -rf $(COLLEEN) $(GRACE) $(SULLY)

re: fclean all