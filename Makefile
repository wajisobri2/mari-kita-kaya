CC		=	gcc
SRC		=	map.c dadu.c player.c main.c
CFLAG	=	-Wall

all	:
		$(CC) $(SRC) $(CFLAG)
