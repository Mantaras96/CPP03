
# # SIMPLE ===================================================================================
# NAME = ClapTrap
# # ==========================================================================================

# # SRCS =====================================================================================
# SRCS_DIR = ./src/
# SRCS =		main.cpp \
# 			ClapTrap.cpp \
# 			ScavTrap.cpp \
# 			FragTrap.cpp \
# 			DiamondTrap.cpp
# # ==========================================================================================

# # FLAGS ====================================================================================
# FLAGS = -Wall -Wextra -Werror
# # ==========================================================================================

# # OBJS =====================================================================================
# OBJS_DIR 	= 	objects/
# OBJ 		= 	$(SRCS:.cpp=.o)
# OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))
# # ==========================================================================================

# # FROM SUBJECT =============================================================================
# $(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
# 	@mkdir -p $(OBJS_DIR)
# 	@echo "Compiling: $<"
# 	@clang++ $(FLAGS) -c $< -o $@

# $(NAME): $(OBJS)
# 	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

# all: $(NAME)

# clean:
# 	@echo "Cleaning: $(OBJS_DIR)"
# 	@rm -rf $(OBJS_DIR)

# fclean: clean
# 	@echo "Cleaning: $(NAME)"
# 	@rm -f $(NAME)

# re: fclean all

NAME = ClapTrap

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

SRC =		main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp
 
HEADER = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp

SRC := $(SRC:%=$(SRC_DIR)/%)
OBJS = ${SRC:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o}
DEP = ${OBJS:.o=.d}
HEADER := $(HEADER:%=$(INC_DIR)/%)


CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 -MMD
RM = rm -rf

${OBJ_DIR}/%.o: ${SRC_DIR}/%.cpp Makefile
	@mkdir -p ${OBJ_DIR}
	$(CC) $(CFLAG) -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAG} ${SRC} -o ${NAME}

all:		${NAME}

-include ${DEP}

clean:
			@${RM} ${OBJ_DIR}

fclean:		clean
			@${RM} ${NAME} ${NAME}.d

re:			fclean all

.PHONY: all clean fclean re