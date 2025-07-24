NAME =	ex01

SRCS =	main.cpp Span.cpp

CXX =	c++

INCLUDE = Span.hpp

FLAGS =	-Werror -Wall -Wextra -std=c++98

OBJS =	$(SRCS:.cpp=.o)

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o		:	%.cpp $(INCLUDE)
	$(CXX) -c $(FLAGS) $< -o $@

clean	:
	@rm -f $(OBJS)

fclean	:	clean
	@rm -f $(NAME)

re		:	fclean all

.PHONY	:	clean