

.DEFAULT_GOAL := libasm.a

NAME = libasm.a

NASM = nasm -f elf64


####### Objects			#######

SRCS = srcs/

OBJS = ft_strlen.o

ft_strlen.o : $(SRCS)ft_strlen.s
			$(NASM) $< -o $@


####### Mandatory rules #######

all : $(NAME)

$(NAME) : $(OBJS)
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)

fclean : clean
		rm -rf $(NAME) a.out

clean :
		rm -rf $(OBJS)

re :	fclean all

.PHONY : clean fclean re all
